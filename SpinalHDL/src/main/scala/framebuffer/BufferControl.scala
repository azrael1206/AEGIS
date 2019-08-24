package framebuffer

import org.apache.commons.io.filefilter.FalseFileFilter
import vga._
import spinal.core._
import spinal.lib._

class BufferControl(config : VGAConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterfaceOutintern(config))
    val wValid = in Bool
    val wData = in Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
    val wAddress = in UInt(1 + log2Up(config.vDisplayBuffer) + log2Up(config.hDisplayBuffer) bits)
    val rData = out Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
    val switch = in Bool
  }

  //instanciate the vga and the buffer object
  val vga = new VGAControl(config)
  val buffer = Buffer(config)
  //some register to delay the signals
  val hSyncDelay = Reg(Bool) init False
  val vSyncDelay = Reg(Bool) init False

  val videoOn = Reg(Bool) init False
  val switchBuffer = Reg(Bool) init False

  //switching to the other framebuffer
  when(io.switch) {
    switchBuffer := !switchBuffer
  }

  //connecting the register and signals
  io.vga.vSync := vSyncDelay
  io.vga.hSync := hSyncDelay
  io.vga.colorEn := videoOn
  vSyncDelay := vga.io.vga.vSync
  hSyncDelay := vga.io.vga.hSync
  videoOn := vga.io.vga.videoOn

  //output the color values when video signal is on otherwise the color ist black
  when (vga.io.vga.videoOn) {
    io.vga.rgb(0).setAllTo(buffer.io.interface.rData(0).asBool)
    io.vga.rgb(1).setAllTo(buffer.io.interface.rData(1).asBool)
    io.vga.rgb(2).setAllTo(buffer.io.interface.rData(2).asBool)
  } otherwise {
    io.vga.rgb(0).clearAll()
    io.vga.rgb(1).clearAll()
    io.vga.rgb(2).clearAll()
  }

  //control the framebuffer
  buffer.io.interface.rValid := vga.io.vga.videoOn
  buffer.io.interface.rAddress := (switchBuffer.asBits ## (vga.io.vga.pixelY(log2Up(config.vDisplayBuffer) downto 1) ## vga.io.vga.pixelX(log2Up(config.hDisplayBuffer) downto 1))).asUInt
  buffer.io.interface.wValid := io.wValid
  buffer.io.interface.rwAddress := io.wAddress
  buffer.io.interface.wData := io.wData
  io.rData := buffer.io.interface.rdata2
}
