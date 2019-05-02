package vga

import spinal.core._
import spinal.lib._

case class VGAConfig(hDisplayArea : Int = 1280, vDisplayArea : Int = 720, hFrontPorch : Int = 110, hBackPorch : Int = 220,
                     hRetrace : Int = 40, vFrontPorch : Int = 5, vBackPorch : Int = 20,
                     vRetrace : Int = 5, freq: HertzNumber = 74.25 MHz)


case class VGAInterface(config : VGAConfig) extends Bundle with IMasterSlave{


  val hSync = Bool
  val vSync = Bool
  val videoOn = Bool
  val pixelX = UInt(log2Up(config.hDisplayArea + config.hBackPorch + config.hFrontPorch + config.hRetrace - 1) bits)
  val pixelY = UInt(log2Up(config.vDisplayArea + config.vBackPorch + config.vFrontPorch + config.vRetrace - 1) bits)

  def asMaster(): Unit = {
    out (hSync, vSync, videoOn, pixelX, pixelY)
  }

}