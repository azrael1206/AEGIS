package framebuffer

import spinal.lib._
import spinal.core._
import vga._


//this object define the interface of the framebuffer

case class BufferInterface(config : VGAConfig) extends Bundle with IMasterSlave{

  val rValid = Bool
  val rData = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  val rAddress = UInt(1 + log2Up(config.vDisplayBuffer) + log2Up(config.hDisplayBuffer) bits)
  val wValid = Bool
  val wData = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  val rwAddress = UInt(1 + log2Up(config.vDisplayBuffer) + log2Up(config.hDisplayBuffer) bits)
  val rdata2 = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))

  def asMaster(): Unit = {
    out (rData, rdata2)
    in (rValid, rAddress, wValid, wData, rwAddress)
  }
}


