package framebuffer

import org.apache.commons.io.filefilter.FalseFileFilter
import vga._
import spinal.core._
import spinal.lib._

class BufferControl(config : VGAConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterfaceOut(config))
    val wValid = in Bool
    val wData = in Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
    val wAddress = in UInt(log2Up(config.vDisplayArea) + log2Up(config.hDisplayArea) bits)
    val switch = in Bool
  }

  val vga = new VGAControl(config)
  val buffer = Buffer(config)
  val hSyncDelay = Reg(Bool) init False
  val vSyncDelay = Reg(Bool) init False
  val switchBuffer = Reg(Bool) init False

  when(io.switch) {
    switchBuffer := !switchBuffer
  }

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
  buffer.io.interface.rAddress := (switchBuffer.asBits ## (vga.io.vga.pixelY ## vga.io.vga.pixelX).resize(19)).asUInt.resized
  buffer.io.interface.wValid := io.wValid
  buffer.io.interface.wAddress := ((!switchBuffer).asBits ## io.wAddress).asUInt
  buffer.io.interface.wData := io.wData
}
