package framebuffer

import spinal.lib._
import spinal.core._
import vga._

case class Buffer(config : VGAConfig) extends Component{
  val io = new Bundle {
    val interface = master(BufferInterface(config))
  }

  var vAreaTemp = config.vDisplayBuffer
  var hAreaTemp = config.hDisplayBuffer

  if (!isPow2(vAreaTemp)) {
    while(!isPow2(vAreaTemp)) {
      vAreaTemp = vAreaTemp + 1
    }
  }

  if (!isPow2(hAreaTemp)) {
    while(!isPow2(hAreaTemp)) {
      hAreaTemp = hAreaTemp + 1
    }
  }


  val bufferFrame = Mem(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)), 2 * (vAreaTemp * hAreaTemp))

  io.interface.rdata2 := bufferFrame.readWriteSync(io.interface.rwAddress, io.interface.wData, True, io.interface.wValid)
  io.interface.rData := bufferFrame.readSync(io.interface.rAddress, io.interface.rValid)


}
