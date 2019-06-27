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

  val programFiFo = new StreamFifo (
    dataType = Vec(Bits(32 bits), UInt(32 bits)),
    depth    = 128
  )
  val axiSharedCmd = io.axicpu.arw.unburstify
  val axiCmd = axiSharedCmd.haltWhen(axiSharedCmd.write && !io.axicpu.writeData.valid)
  val writeRsp = cloneOf(io.axicpu.writeRsp)
  programFiFo.io.push.payload(0) := io.axicpu.writeData.data
  programFiFo.io.push.payload(1) := axiCmd.addr(io.axicpu.config.wordRange).resized
  programFiFo.io.push.valid := axiCmd.valid

  writeRsp.valid := axiCmd.fire && axiCmd.write && axiCmd.last
  writeRsp.setOKAY()
  writeRsp.id := axiCmd.id
  writeRsp >-> io.axicpu.writeRsp




  val inst = Reg(Bits(32 bits)) init 0
  val storeVals1  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeVals2  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeRadius = Reg(UInt(log2Up(config.hDisplayArea) bits)) init 0
  val storeColor  = Reg(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)))

  val vga = new BufferControl(config)
  val bresLine = new BreshamLine(config)
  val bresCircle = new BreshamCircle(config)
  val fillRect = new FillRetancle(config)

  vga.io.wAddress.clearAll()
  vga.io.wData(0).clearAll()
  vga.io.wData(1).clearAll()
  vga.io.wData(2).clearAll()
  vga.io.wValid.clear()
  vga.io.switch.clear()

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

  vga.io.vga.hSync <> io.vga.hSync
  vga.io.vga.vSync <> io.vga.vSync
  io.vga.rgb := vga.io.vga.rgb

  programFiFo.io.pop.ready := True





}