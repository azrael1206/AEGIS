package framebuffer

import spinal.lib._
import spinal.core._
import vga._

case class Buffer(config : VGAConfig) extends Component{
  val io = new Bundle {
    val interface = master(BufferInterface(config))
  }

  var vAreaTemp = config.vDisplayArea
  var hAreaTemp = config.hDisplayArea

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


  val buffer = Mem(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)), vAreaTemp * hAreaTemp)

  buffer.write(io.interface.wAddress, io.interface.wData, io.interface.wValid)
  io.interface.rData := buffer.readSync(io.interface.rAddress, io.interface.rValid)


}
