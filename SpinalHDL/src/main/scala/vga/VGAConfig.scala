package vga

import spinal.core._
import spinal.lib._

case class VGAConfig(hDisplayBuffer : Int,
                     vDisplayBuffer : Int,
                     hFrontPorch : Int,
                     hDisplayArea : Int,
                     vDisplayArea : Int,
                     hBackPorch : Int,
                     hRetrace : Int,
                     vFrontPorch : Int,
                     vBackPorch : Int,
                     vRetrace : Int,
                     freq: HertzNumber,
                     colorR : Int,
                     colorG : Int,
                     colorB : Int)

//some default values for standard resolution
object VGAConfig {
  def setAs_640_480_60 : VGAConfig = VGAConfig(
    hDisplayBuffer = 320,
    vDisplayBuffer = 240,
    hDisplayArea = 640,
    vDisplayArea = 480,
    hFrontPorch = 16,
    hBackPorch = 48,
    hRetrace = 96,
    vFrontPorch = 10,
    vBackPorch = 33,
    vRetrace = 2,
    freq = 25 MHz,
    colorR = 1,
    colorG = 1,
    colorB = 1
  )

  def setAs_800_600_60 : VGAConfig = VGAConfig(
    hDisplayBuffer = 800,
    vDisplayBuffer = 600,
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
    hDisplayBuffer = 1280,
    vDisplayBuffer = 720,
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

  //WARNING untested resolution, can break the vga. We take no responsibility for damages
  def setAs_1920_1080_60 : VGAConfig = VGAConfig(
    hDisplayBuffer = 1920,
    vDisplayBuffer = 1080,
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

//this interface is for the VGA Control
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

//this Interface is for every class that sends out the vga data to an internal component
case class VGAInterfaceOutintern(config : VGAConfig) extends Bundle with IMasterSlave{


  val hSync = Bool
  val vSync = Bool
  val rgb = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  val colorEn = Bool


  def asMaster(): Unit = {
    out (hSync, vSync, rgb, colorEn)
  }

}

//this Interface is for every class that sends out the vga data to an external component. This is legacy code
case class VGAInterfaceOutextern(config : VGAConfig) extends Bundle with IMasterSlave{


  val hSync = Bool
  val vSync = Bool
  val rgb = Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  val colorEn = Bool



  def asMaster(): Unit = {
    out (hSync, vSync, rgb, colorEn)
  }

}