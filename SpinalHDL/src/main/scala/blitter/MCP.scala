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
    val axicpu = slave(Axi4Shared(Axi4Config(24, 32, 4)))
    val axiram = master(Axi4ReadOnly(Axi4Config(32, 32, useId = false, useRegion = false,
      useBurst = false,
      useLock = false,
      useQos = false,
      useResp = false)))
  }


  val id         = Reg(UInt(4 bits))
  val address = Reg(UInt(32 bits))
  val storeVals1  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeVals2  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeRadius = Reg(UInt(log2Up(config.hDisplayArea) bits)) init 0
  val storeColor  = Reg(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)))
  val write      = Reg(Bool)
  val trigger = Reg(Bool) init True
  val mode = Reg(UInt(3 bits))
  val counter = Reg(UInt(8 bits)) init 0
  val temp = (UInt (8 bits))
  val toCount = Reg(Bits(8 bits))
  val switchVGA = Reg(Bool) init False
  val alpha = Reg(Bits(64 bits))
  //val sprite = Vec(Reg(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))), 64)
  val vga = new BufferControl(config)
  val bresLine = new BreshamLine(config)
  val bresCircle = new BreshamCircle(config)
  val fillRect = new FillRetancle(config)
  //val blitterFont = new BlitterFontCopy(config)
  val buffer = Reg(Bits(32 bits))
  //val fontRam = new FontRam


  vga.io.switch := switchVGA
  temp := counter - 2
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
/*
  fontRam.io.address := storeRadius.resized
  fontRam.io.address2 := (storeRadius + 128).resized
  fontRam.io.dataIn.clearAll
  fontRam.io.write := False


  blitterFont.io.start := False
  blitterFont.io.addressYIn.clearAll()
  blitterFont.io.addressXIn.clearAll()
  blitterFont.io.font := fontRam.io.dataOut ## fontRam.io.dataOut2

*/

  vga.io.vga.hSync <> io.vga.hSync
  vga.io.vga.vSync <> io.vga.vSync
  vga.io.vga.colorEn <> io.vga.colorEn

  io.vga.rgb := vga.io.vga.rgb

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
  vga.io.wAddress := (!switchVGA ## io.axicpu.sharedCmd.addr(10 + log2Up(config.vDisplayArea) downto 11) ## io.axicpu.sharedCmd.addr(log2Up(config.hDisplayArea) - 1 downto 0)).asUInt
  vga.io.wValid := io.axicpu.sharedCmd.write & io.axicpu.sharedCmd.valid

  io.axicpu.writeRsp.id := id
  io.axicpu.readRsp.resp := Axi4.resp.OKAY
  io.axicpu.writeRsp.resp := Axi4.resp.OKAY

  val mcpState = new StateMachine {
    val idle = new State with EntryPoint
    val response = new State
    val readData = new StateFsm(fsm = internalFSM())
    val copyOutFont = new State
    val fRect = new State
    val bCircle = new State
    val bLine = new State



    idle.whenIsActive{
      write := io.axicpu.sharedCmd.write
      id := io.axicpu.sharedCmd.id
      when(io.axicpu.sharedCmd.valid && (!io.axicpu.sharedCmd.write || io.axicpu.writeData.valid)) {
        when (!io.axicpu.sharedCmd.addr(23)) {
          io.axicpu.sharedCmd.ready := True
          io.axicpu.writeData.ready := io.axicpu.sharedCmd.write
          goto(response)
        } otherwise{
          address := io.axicpu.writeData.data.asUInt
          io.axicpu.sharedCmd.ready := True
          io.axicpu.writeData.ready := io.axicpu.sharedCmd.write
          goto(response)
        }
      }
    }

    response.whenIsActive{
      when(write) {
        io.axicpu.writeRsp.valid := True
        when (io.axicpu.writeRsp.ready){
          goto (idle)
        }
      } otherwise{
        io.axicpu.readRsp.valid := True
        when (io.axicpu.readRsp.ready) {
          goto(idle)
        }
      }
    }

    readData.whenCompleted{
      switch(address(22 downto 1)) {
        //Bresenham Line
        is(0) {
          bresLine.io.coord1 := storeVals1.resized
          bresLine.io.coord2 := storeVals2.resized
          bresLine.io.start := True
          goto(bLine)
        }
        //Bresenham Cirlce
        is(1) {
          bresCircle.io.coord := storeVals1.resized
          bresCircle.io.r := storeRadius.resized
          bresCircle.io.start := True
          goto(bCircle)
        }
        //Bresenham Ellipse
        is(2) {
          goto(idle)
        }
        is(3) {
          //Fill rect
          fillRect.io.coord1 := storeVals2.resized
          fillRect.io.coord2 := storeVals2.resized
          fillRect.io.start := True
          goto(fRect)
        }
        is(4) {
          //Blitter copy Font from Ram
          goto(idle)
        }
        is(5) {
          //Blitter copy font from GPURAM to Framebuffer
          //blitterFont.io.addressXIn := storeVals1(0).resized
          //blitterFont.io.addressYIn := storeVals1(1).resized
          goto(idle)
        }
        is(6) {
          //Blitter copy Sprite to Framebuffer
          goto(idle)
        }
        is(7) {
          switchVGA := !switchVGA
          goto(idle)
        }
      }
    }
    /*
    copyOutFont.whenIsActive{
      vga.io.wAddress := blitterFont.io.addressOut.resized
      vga.io.wData := storeColor.resized
      vga.io.wValid := blitterFont.io.write
      when (blitterFont.io.ready) {
        goto(idle)
      }
    }
*/
    fRect.whenIsActive{
      vga.io.wAddress := (!switchVGA ## fillRect.io.address.asBits).asUInt.resized
      vga.io.wData := storeColor.resized
      vga.io.wValid := fillRect.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

    bCircle.whenIsActive{
      vga.io.wAddress := (!switchVGA ## bresCircle.io.address(1).resize(log2Up(config.vDisplayArea)) ## bresCircle.io.address(0).resize(log2Up(config.hDisplayArea))).asUInt
      vga.io.wData := storeColor.resized
      vga.io.wValid := bresCircle.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

    bLine.whenIsActive{
      vga.io.wAddress := (!switchVGA ## bresLine.io.address(1).resize(log2Up(config.vDisplayArea)) ## bresLine.io.address(0).resize(log2Up(config.hDisplayArea))).asUInt
      vga.io.wData := storeColor.resized
      vga.io.wValid := bresCircle.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

  }



  def internalFSM() = new StateMachine{
    val idle = new State with EntryPoint
    val readRam = new State
    val twoCoord = new State
    val oneCoord = new State
    val font = new State
    val copyFont = new State
    val copySprite = new State


    idle.whenIsActive{
      counter := 0

      switch(address(22 downto 1)) {
        //Bresenham Line
        is(0) {
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 0
        }
        //Bresenham Cirlce
        is(1) {
          io.axiram.readCmd.len := 3
          io.axiram.readCmd.valid := True
          mode := 1
        }
        //Bresenham Ellipse
        is(2) {
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 0
        }
        is(3) {
          //Fill rect
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 0
        }
        is(4) {
          //Blitter copy Font from Ram
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
          mode := 2
        }
        is(5) {
          //Blitter copy font from GPURAM to Framebuffer
          io.axiram.readCmd.len := 2
          io.axiram.readCmd.valid := True
          mode := 1
        }
        is(6) {
          //Blitter copy Sprite to Framebuffer
          io.axiram.readCmd.len := 67
          io.axiram.readCmd.valid := True
          mode := 3
        }
        default {
          goto(idle)
        }
      }
      goto(readRam)

    }

    readRam.whenIsActive{
      when(io.axiram.readRsp.valid) {
        buffer := io.axiram.r.data
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
          default {
            exitFsm()
          }
        }
      }
    }

    twoCoord.whenIsActive{
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(2) {
          storeVals2(0) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(3) {
          storeVals2(1) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)

        }
        is(4) {
          storeColor(0) := buffer(10 downto 0).resized
          storeColor(1) := buffer(21 downto 11).resized
          storeColor(2) := buffer(31 downto 10).resized
          exitFsm()
        }
        default {
          exitFsm()
        }
      }
    }

    oneCoord.whenIsActive {
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(2) {
          storeRadius := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(3) {
          storeColor(0) := buffer(10 downto 0).resized
          storeColor(1) := buffer(21 downto 11).resized
          storeColor(2) := buffer(31 downto 10).resized
          exitFsm()
        }
        default
          exitFsm()
      }
    }

    font.whenIsActive{
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(2) {
          storeVals2(0) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(4) {
          storeColor(0) := buffer(10 downto 0).resized
          storeColor(1) := buffer(21 downto 11).resized
          storeColor(2) := buffer(31 downto 10).resized
          exitFsm()
        }
        default {
          exitFsm()
        }
      }
    }


    copySprite.whenIsActive{
      switch(counter) {
        is(0) {
          storeVals1(0) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }
        is(1) {
          storeVals1(1) := buffer.asUInt.resized
          counter := counter + 1
          goto(readRam)
        }

        is(2) {
          alpha(31 downto 0) := buffer
          counter := counter + 1
          goto(readRam)
        }
        is(3) {
          alpha(63 downto 32) := buffer
          counter := counter + 1
          exitFsm()
        }
        for (i <- 4 to 67) {
          is(i) {
            vga.io.wData(0) := buffer(10 downto 0).resized
            vga.io.wData(1) := buffer(21 downto 11).resized
            vga.io.wData(2) := buffer(31 downto 12).resized
            vga.io.wAddress := (!switchVGA ## (storeVals1(1) + temp(5 downto 3)) ## (storeVals1(0) + temp(2 downto 0))).asUInt
            vga.io.wValid   := alpha(i - 4)
            counter := counter + 1
            goto(readRam)
          }
        }
        default {
          exitFsm()
        }
      }
    }
    io.axiram.readCmd.addr := address.resized
    io.axiram.readCmd.valid := False
    io.axiram.readCmd.size := B"101".asUInt
    io.axiram.readCmd.len := 0
    io.axiram.readRsp.ready := False
    when (!vga.io.vga.vSync & trigger) {
      switchVGA := !switchVGA
      trigger := False
    } elsewhen(vga.io.vga.vSync) {
      trigger := True
    }

  }


}