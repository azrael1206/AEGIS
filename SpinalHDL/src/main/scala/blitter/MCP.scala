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

class MCP(config : VGAConfig, piplinedBusConfig : PipelinedMemoryBusConfig, axi4config: Axi4Config) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterfaceOut(config))
    val axicpu = slave(Axi4Shared(axi4config))
    val axiram = master(Axi4ReadOnly(axi4config))

  }


  val id         = Reg(UInt(axi4config.idWidth bits))
  val address = Reg(UInt(32 bits))
  val storeVals1  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeVals2  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeRadius = Reg(UInt(log2Up(config.hDisplayArea) bits)) init 0
  val storeColor  = Reg(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)))
  val write      = Reg(Bool)
  val switch = Reg(Bool) init False
  val vga = new BufferControl(config)
  val bresLine = new BreshamLine(config)
  val bresCircle = new BreshamCircle(config)
  val fillRect = new FillRetancle(config)
  val blitterFont = new BlitterFontCopy(config)
  val fontRam = new FontRam


  vga.io.wAddress.clearAll()
  vga.io.wData(0).clearAll()
  vga.io.wData(1).clearAll()
  vga.io.wData(2).clearAll()
  vga.io.wValid.clear()
  vga.io.switch := switch

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

  fontRam.io.address.clearAll
  fontRam.io.dataIn.clearAll
  fontRam.io.write := False

  blitterFont.io.start := False
  blitterFont.io.addressYIn.clearAll()
  blitterFont.io.addressXIn.clearAll()
  blitterFont.io.font := fontRam.io.dataOut



  vga.io.vga.hSync <> io.vga.hSync
  vga.io.vga.vSync <> io.vga.vSync
  io.vga.rgb := vga.io.vga.rgb

  io.axicpu.sharedCmd.ready    := False
  io.axicpu.writeData.ready    := False
  io.axicpu.writeRsp.valid     := False
  io.axicpu.readRsp.valid      := False

  io.axicpu.readRsp.data := vga.io.rData(2).resize(10) ## vga.io.rData(1).resize(11) ## vga.io.rData(0).resize(11)
  io.axicpu.readRsp.last := True
  io.axicpu.readRsp.id := id

  io.axiram.readCmd.addr := address

  vga.io.wData(0) := io.axicpu.writeData.data(10 downto 0).resize(config.colorR)
  vga.io.wData(1) := io.axicpu.writeData.data(21 downto 11).resize(config.colorG)
  vga.io.wData(2) := io.axicpu.writeData.data(31 downto 22).resize(config.colorB)
  vga.io.wAddress := io.axicpu.sharedCmd.addr
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
          address := io.axicpu.sharedCmd.addr
          io.axicpu.sharedCmd.ready := True
          io.axicpu.writeData.ready := io.axicpu.sharedCmd.write
          goto(readData)
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

    copyOutFont.whenIsActive{
      vga.io.wAddress := blitterFont.io.addressOut.resized
      vga.io.wData := storeColor
      vga.io.wValid := blitterFont.io.write
      when (blitterFont.io.ready) {
        goto(idle)
      }
    }

    fRect.whenIsActive{
      vga.io.wAddress := (switch.asBits ## fillRect.io.address.asBits).asUInt.resized
      vga.io.wData := storeColor
      vga.io.wValid := fillRect.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

    bCircle.whenIsActive{
      vga.io.wAddress := (switch.asBits ## bresCircle.io.address(1).resize(log2Up(config.vDisplayArea)) ## bresCircle.io.address(0).resize(log2Up(config.hDisplayArea))).asUInt
      vga.io.wData := storeColor
      vga.io.wValid := bresCircle.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

    bLine.whenIsActive{
      vga.io.wAddress := (switch.asBits ## bresLine.io.address(1).resize(log2Up(config.vDisplayArea)) ## bresLine.io.address(0).resize(log2Up(config.hDisplayArea))).asUInt
      vga.io.wData := storeColor
      vga.io.wValid := bresCircle.io.setPixel
      when (fillRect.io.ready) {
        goto(idle)
      }
    }

  }



  def internalFSM() = new StateMachine{
    val idle = new State with EntryPoint
    val readRam = new State


    idle.whenIsActive{
      switch(address(22 downto 1)) {
        is(0) {
          io.axiram.readCmd.len := 5
          io.axiram.readCmd.valid := True
        }
        is(1) {
          io.axiram.readCmd.len := 4
          io.axiram.readCmd.valid := True
        }
        is(2) {
          io.axiram.readCmd.len := 5
          io.axiram.readCmd.valid := True
        }
        is(3) {
          io.axiram.readCmd.len := 5
          io.axiram.readCmd.valid := True
        }
        is(4) {
          io.axiram.readCmd.len := 256
          io.axiram.readCmd.valid := True
        }
        is(5) {
          io.axiram.readCmd.len := 2
          io.axiram.readCmd.valid := True
        }
        is(6) {
          io.axiram.readCmd.len := 66
          io.axiram.readCmd.valid := True
        }
      }
    }
  }



}