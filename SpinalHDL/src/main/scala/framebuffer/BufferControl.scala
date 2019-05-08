package framebuffer

import vga._
import spinal.core._
import spinal.lib._

class BufferControl(config : VGAConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterfaceOut(config))
    val wValid = in Bool
    val wData = in Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
    val wAddress = in UInt(log2Up(config.vDisplayArea) + log2Up(config.hDisplayArea) bits)
  }

  val vga = new VGAControl(config)
  val buffer = Buffer(config)
  val hSyncDelay = Reg(Bool) init False
  val vSyncDelay = Reg(Bool) init False

  io.vga.vSync := vSyncDelay
  io.vga.hSync := hSyncDelay
  when (vga.io.vga.videoOn) {
    io.vga.rgb := buffer.io.interface.rData
  } otherwise {
    io.vga.rgb(0).clearAll()
    io.vga.rgb(1).clearAll()
    io.vga.rgb(2).clearAll()
  }
  vSyncDelay := vga.io.vga.vSync
  hSyncDelay := vga.io.vga.hSync

  buffer.io.interface.rValid := vga.io.vga.videoOn
  buffer.io.interface.rAddress := (vga.io.vga.pixelY ## vga.io.vga.pixelX).asUInt.resized
  buffer.io.interface.wValid := io.wValid
  buffer.io.interface.wAddress := io.wAddress
  buffer.io.interface.wData := io.wData
}
