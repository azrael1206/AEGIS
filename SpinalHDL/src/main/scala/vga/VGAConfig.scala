package vga

import spinal.core._
import spinal.lib._

case class VGAConfig(hDisplayArea : Int,
                     vDisplayArea : Int,
                     hFrontPorch : Int,
                     hBackPorch : Int,
                     hRetrace : Int,
                     vFrontPorch : Int,
                     vBackPorch : Int,
                     vRetrace : Int,
                     freq: HertzNumber,
                     colorR : Int,
                     colorG : Int,
                     colorB : Int,)

object VGAConfig {
  def setAs_640_480_60 : VGAConfig = VGAConfig(
    hDisplayArea = 640,
    vDisplayArea = 480,
    hFrontPorch = 16,
    hBackPorch = 48,
    hRetrace = 96,
    vFrontPorch = 10,
    vBackPorch = 33,
    vRetrace = 2,
    freq = 25.175 MHz,
    colorR = 1,
    colorG = 1,
    colorB = 1
  )

  def setAs_800_600_60 : VGAConfig = VGAConfig(
    hDisplayArea = 800,
    vDisplayArea = 600,
    hFrontPorch = 40,
    hBackPorch = 88,
    hRetrace = 128,
    vFrontPorch = 1,
    vBackPorch = 23,
    vRetrace = 4,
    freq = 40 MHz,
    colorR = 1,
    colorG = 1,
    colorB = 1
  )

  def setAs_1280_720_60 : VGAConfig = VGAConfig(
    hDisplayArea = 1280,
    vDisplayArea = 720,
    hFrontPorch = 110,
    hBackPorch = 220,
    hRetrace = 40,
    vFrontPorch = 5,
    vBackPorch = 20,
    vRetrace = 5,
    freq = 74.25 MHz,
    colorR = 1,
    colorG = 1,
    colorB = 1
  )

  def setAs_1920_1080_60 : VGAConfig = VGAConfig(
    hDisplayArea = 1920,
    vDisplayArea = 1080,
    hFrontPorch = 88,
    hBackPorch = 148,
    hRetrace = 44,
    vFrontPorch = 4,
    vBackPorch = 36,
    vRetrace = 5,
    freq = 148.5 MHz,
    colorR = 1,
    colorG = 1,
    colorB = 1

  )

}


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