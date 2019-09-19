package blitter

import drawer._
import framebuffer.BufferControl
import spinal.core._
import spinal.lib._
import spinal.lib.bus.simple._
import spinal.lib.fsm._
import vga._
import vexriscv._
import spinal.lib.bus.amba4.axi._

case class MCP(config : VGAConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterfaceOutintern(config))
    val axicpu = slave(Axi4Shared(Axi4Config(28, 32, 4)))
    val axiram = master(Axi4ReadOnly(Axi4Config(32, 32, useId = false, useRegion = false,
      useBurst = false,
      useLock = false,
      useQos = false,
      useResp = false)))
  }
  //#############################
  //#needed signals and register#
  //#############################

  //id for the axi Bus
  val id         = Reg(UInt(4 bits)) init 0
  //the address we getting from the axi Bus
  val address = Reg(UInt(28 bits)) init 0
  //the data we getting from the axi bus
  val raddress = Reg(UInt(32 bits)) init 0
  //Store the x and  y coordinates in a Vector storeVals1 ist for x1 and y1, and storeVals2 for x2 and y2
  val storeVals1  = Reg(Vec(UInt(log2Up(config.hDisplayBuffer) bits), UInt(log2Up(config.vDisplayBuffer) bits)))
  val storeVals2  = Reg(Vec(UInt(log2Up(config.hDisplayBuffer) bits), UInt(log2Up(config.vDisplayBuffer) bits)))
  //store the radius Value
  val storeRadius = Reg(UInt(log2Up(config.hDisplayBuffer) bits)) init 0
  //store the three color in an Vector
  val storeColor  = Reg(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)))
  //here we save if we get a write request from the axi bus
  val write      = Reg(Bool) init False
  //needed variable to know witch function we call
  val mode = Reg(UInt(3 bits)) init 0
  //a counter to count the values we get from the axi bus
  val counter = Reg(UInt(8 bits)) init 0
  //a temporary signal to calculate a another counter value
  val temp = (UInt (8 bits))

  //this value is for the framebuffer switching
  val switchVGA = Reg(Bool) init False
  //saves the alpha values for the sprites and saves the font
  val alpha = Reg(Bits(64 bits)) init 0
  //how many words we want from the axi Bus
  val len = Reg(UInt (8 bits)) init 0
  //needed for the handshake protocol from the axi bus
  val valid = Reg(Bool) init False
  //a buffer to store the data from the axi bus
  val buffer = Reg(Bits(32 bits))

  //############################################
  //#instanciate needed objects with the config#
  //############################################

  //this object is for the control of the framebuffer and the vga timmings
  val vga = new BufferControl(config)
  //this object calculate a Bresenham line
  val bresLine = new BreshamLine(config)
  //this object calculate a Beresenham circle
  val bresCircle = new BreshamCircle(config)
  //this object can fill a rectancle
  val fillRect = new FillRetancle(config)
  //this object copy a font from the alpha register into the framebuffer
  val blitterFont = new BlitterFontCopy(config)



  //####################################################################################
  //#This part set the default value of the objects and connecting signals and register#
  //####################################################################################

  //is for the framebuffer switch
  vga.io.switch := False
  //calculating a different counter value
  temp := counter - 4

  //standard values for the objects
  fillRect.io.start := False
  fillRect.io.coord1(0).clearAll()
  fillRect.io.coord1(1).clearAll()
  fillRect.io.coord2(0).clearAll()
  fillRect.io.coord2(1).clearAll()

  bresLine.io.coord1(0).clearAll()
  bresLine.io.coord1(1).clearAll()
  bresLine.io.coord2(0).clearAll()
  bresLine.io.coord2(1).clearAll()
  bresLine.io.start := False

  bresCircle.io.coord(0).clearAll()
  bresCircle.io.coord(1).clearAll()
  bresCircle.io.r.clearAll()
  bresCircle.io.start := False

  blitterFont.io.start := False
  blitterFont.io.addressYIn := storeVals1(1)
  blitterFont.io.addressXIn := storeVals1(0)
  blitterFont.io.font := alpha

  //connecting the vga object to the outworld
  vga.io.vga.hSync <> io.vga.hSync
  vga.io.vga.vSync <> io.vga.vSync
  vga.io.vga.colorEn <> io.vga.colorEn
  vga.io.vga.rgb <> io.vga.rgb

  //this part set the default value for the axi bus, and connecting axi signals
  io.axicpu.sharedCmd.ready    := False
  io.axicpu.writeData.ready    := False
  io.axicpu.writeRsp.valid     := False
  io.axicpu.readRsp.valid      := False

  io.axicpu.readRsp.data := vga.io.rData(2).resize(10) ## vga.io.rData(1).resize(11) ## vga.io.rData(0).resize(11)
  io.axicpu.readRsp.last := True
  io.axicpu.readRsp.id := id


  vga.io.wData(0) := io.axicpu.writeData.data(10 downto 0).resize(config.colorR)
  vga.io.wData(1) := io.axicpu.writeData.data(21 downto 11).resize(config.colorG)
  vga.io.wData(2) := io.axicpu.writeData.data(31 downto 22).resize(config.colorB)
  vga.io.wAddress := (io.axicpu.sharedCmd.addr(18) ## io.axicpu.sharedCmd.addr(9 + log2Up(config.vDisplayBuffer) downto 10) ## io.axicpu.sharedCmd.addr(log2Up(config.hDisplayBuffer) + 1 downto 2)).asUInt
  vga.io.wValid := io.axicpu.sharedCmd.write & io.axicpu.sharedCmd.valid & !io.axicpu.sharedCmd.addr(25)

  io.axicpu.writeRsp.id := id
  io.axicpu.readRsp.resp := Axi4.resp.OKAY
  io.axicpu.writeRsp.resp := Axi4.resp.OKAY

  io.axiram.readCmd.valid := valid
  io.axiram.readCmd.len := len

  //#################################################
  //#The control state machine that controls the gpu#
  //#################################################
  val mcpState = new StateMachine {
    val idle = new State with EntryPoint
    val waitState = new State
    val response = new State
    val readData = new StateFsm(fsm = internalFSM())
    val copyOutFont = new State
    val switchFrame = new State
    val fRect = new State
    val bCircle = new State
    val bLine = new State


    //this state waiting until a axi request is comming, after that it goes to a one cycle waitstate
    idle.whenIsActive{
      write := io.axicpu.sharedCmd.write
      id := io.axicpu.sharedCmd.id
      when(io.axicpu.sharedCmd.valid && (!io.axicpu.sharedCmd.write || io.axicpu.writeData.valid)) {
        when (!io.axicpu.sharedCmd.addr(25)) {
          goto(waitState)
        } otherwise{
          address := io.axicpu.sharedCmd.addr
          raddress := io.axicpu.writeData.data.asUInt
          goto(waitState)
        }
      }
    }

    //one cycle wait state, and setting axi values for the handshake protokoll
    waitState.whenIsActive{
      io.axicpu.sharedCmd.ready := True
      io.axicpu.writeData.ready := write
      goto(response)
    }

    //sending the response value over the axi bus
    response.whenIsActive{
      when(write) {
        io.axicpu.writeRsp.valid := True
        when (io.axicpu.writeRsp.ready){
          //when the bit is not set it writes directly to the framebuffer
          when(!address(25)) {
            goto(idle)
          } otherwise {
            //this is do determine is the address is for the switch framebuffer
            when(address(10 downto 2) === B"000000111".asUInt) {
              goto(switchFrame)
            } otherwise {
              goto(readData)
            }
          }
        }
      } otherwise{
        //reading from the framebuffer
        io.axicpu.readRsp.valid := True
        when (io.axicpu.readRsp.ready) {
          goto(idle)
        }
      }
    }

    //this state is started when the nested state machine ist completed
    readData.whenCompleted{
      switch(address(10 downto 2)) {

        is(B"000000000".asUInt) {
          //Bresenham Line
          bresLine.io.coord1 := storeVals1.resized
          bresLine.io.coord2 := storeVals2.resized
          bresLine.io.start := True
          goto(bLine)
        }
        is(B"000000001".asUInt) {
          //Bresenham Cirlce
          bresCircle.io.coord := storeVals1.resized
          bresCircle.io.r := storeRadius.resized
          bresCircle.io.start := True
          goto(bCircle)
        }
        is(B"000000011".asUInt) {
          //Fill rect
          fillRect.io.coord1 := storeVals2.resized
          fillRect.io.coord2 := storeVals2.resized
          fillRect.io.start := True
          goto(fRect)
        }
        is(B"000000101".asUInt) {
          //Blitter copy font from alpha Register to Framebuffer
          blitterFont.io.start := True
          goto(copyOutFont)
        }
        default {
          goto(idle)
        }
      }
    }

    //State for copying the font from alpha register to the framebuffer
    copyOutFont.whenIsActive{
      vga.io.wAddress := (!switchVGA ## blitterFont.io.addressOut).asUInt.resized
      vga.io.wData := storeColor.resized
      vga.io.wValid := blitterFont.io.write
      when (blitterFont.io.ready) {
        goto(idle)
      }
    }
    //switching the two framebuffer when he is in vsync
    switchFrame.whenIsActive{
      when (!vga.io.vga.vSync) {
        switchVGA := !switchVGA
        vga.io.switch := True
        goto(idle)
      }
    }

    //state for drawing a rectancle
    fRect.whenIsActive{
      vga.io.wAddress := (!switchVGA ## fillRect.io.address.asBits).asUInt.resized
      vga.io.wData := storeColor.resized
      vga.io.wValid := fillRect.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

    //state for drawing a circle
    bCircle.whenIsActive{
      vga.io.wAddress := (!switchVGA ## bresCircle.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresCircle.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
      vga.io.wData := storeColor.resized
      vga.io.wValid := bresCircle.io.setPixel
      when (bresCircle.io.ready) {
        goto(idle)
      }
    }

    //state for drawing a line
    bLine.whenIsActive{
      vga.io.wAddress := (!switchVGA ## bresLine.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresLine.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
      vga.io.wData := storeColor.resized
      vga.io.wValid := bresLine.io.setPixel
      when (bresLine.io.ready) {
        goto(idle)
      }
    }

  }


  //nested state machine
  def internalFSM() = new StateMachine{
    val idle = new State with EntryPoint
    val readRam = new State
    val twoCoord = new State
    val oneCoord = new State
    val font = new State
    val copyFont = new State
    val copySprite = new State
    val exit = new State

    //idle function here start the state machine,
    // setting up the the number of words and setting the counter to zero
    idle.whenIsActive{
      counter := 0
      valid := False
      switch(address(10 downto 2)) {
        //Bresenham Line
        is(B"000000000".asUInt) {
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 0
          goto(readRam)
        }
        //Bresenham Cirlce
        is(B"000000001".asUInt) {
          io.axiram.readCmd.len := 3
          io.axiram.readCmd.valid := True
          mode := 1
          goto(readRam)
        }
        //Bresenham Ellipse
        is(B"000000010".asUInt) {
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 0
          goto(readRam)
        }
        is(B"000000011".asUInt) {
          //Fill rect
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 0
          goto(readRam)
        }
        is(B"000000100".asUInt) {
          //Blitter copy Font from Ram
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 2
          goto(readRam)
        }
        is(B"000000101".asUInt) {
          //Blitter copy font from GPURAM to Framebuffer
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 2
          goto(readRam)
        }
        is(B"000000110".asUInt) {
          //Blitter copy Sprite to Framebuffer
          io.axiram.readCmd.len := 67
          io.axiram.readCmd.valid := True
          mode := 3
          goto(readRam)
        }
        default {
          goto(exit)
        }
      }


    }

    //this state read the data comming from the axi bus,
    //and goes to the states for saving it in the right register
    readRam.whenIsActive{
      when(io.axiram.readRsp.valid) {
        buffer := io.axiram.readRsp.data
        valid := False
        io.axiram.readRsp.ready := True
        switch(mode) {
          is(0) {
            goto(twoCoord)
          }
          is(1) {
            goto(oneCoord)
          }
          is(2) {
            goto(font)
          }
          is(3) {
            goto(copySprite)
          }
        }
      }
    }

    //this state is for all drawing allgorithm that need two coordinates
    twoCoord.whenIsActive{
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(2) {
          storeVals2(0) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(3) {
          storeVals2(1) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)

        }
        is(4) {
          storeColor(0) := buffer(10 downto 0).resized
          storeColor(1) := buffer(21 downto 11).resized
          storeColor(2) := buffer(31 downto 22).resized
          len := 0
          goto(exit)
        }
      }
    }

    //this state is for allgorithm that need only one coordinate and a radius
    oneCoord.whenIsActive {
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(2) {
          storeRadius := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(3) {
          storeColor(0) := buffer(10 downto 0).resized
          storeColor(1) := buffer(21 downto 11).resized
          storeColor(2) := buffer(31 downto 22).resized
          goto(exit)
        }
        default
        goto(exit)
      }
    }
    //this state saves the font in alpha
    font.whenIsActive{
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(2) {
          alpha(63 downto 32) := buffer
          counter := counter + 1
          valid := True
          goto(readRam)

        }
        is(3) {
          alpha(31 downto 0) := buffer
          counter := counter + 1
          valid := True
          goto(readRam)

        }
        is(4) {
          storeColor(0) := buffer(10 downto 0).resized
          storeColor(1) := buffer(21 downto 11).resized
          storeColor(2) := buffer(31 downto 22).resized
          goto(exit)
        }

      }
    }

    //this state saves the sprite directly into the framebuffer
    copySprite.whenIsActive{
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          valid := True
          goto(readRam)
        }

        is(2) {
          alpha(31 downto 0) := buffer
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        is(3) {
          alpha(63 downto 32) := buffer
          counter := counter + 1
          valid := True
          goto(readRam)
        }
        for (i <- 4 to 67) {
          is(i) {
            vga.io.wData(0) := buffer(10 downto 0).resized
            vga.io.wData(1) := buffer(21 downto 11).resized
            vga.io.wData(2) := buffer(31 downto 22).resized
            vga.io.wAddress := (!switchVGA ## (storeVals1(1) + temp(5 downto 3)) ## (storeVals1(0) + temp(2 downto 0))).asUInt
            vga.io.wValid   := alpha(63 - (i - 4))
            counter := counter + 1
            valid := True
            goto(readRam)
          }
        }
        is(68) {
          goto(exit)
        }
        default {
          goto(exit)
        }
      }
    }

    exit.whenIsActive{
      exitFsm();
    }

    //setting up some signals for the axi master
    io.axiram.readCmd.addr := raddress.resized

    io.axiram.readCmd.size := B"010".asUInt

    io.axiram.readRsp.ready := True
  }


}