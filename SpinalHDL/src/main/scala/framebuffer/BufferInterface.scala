package framebuffer

import spinal.lib._
import spinal.core._
import vga._

case class BufferInterface(config : VGAConfig) extends Bundle with IMasterSlave{

  val rValid = Bool
  val rData = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  val rAddress = UInt(1 + log2Up(config.vDisplayArea) + log2Up(config.hDisplayArea) bits)
  val wValid = Bool
  val wData = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  val wAddress = UInt(1 + log2Up(config.vDisplayArea) + log2Up(config.hDisplayArea) bits)

  def asMaster(): Unit = {
    out (rData)
    in (rValid, rAddress, wValid, wData, wAddress)
  }
}


