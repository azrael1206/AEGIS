package vga

import spinal.core._
import spinal.lib._

class VGAControl(config : VGAConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterface(config))
  }

  //setting up a slow area with the frequency needed for the vga resolution
  //the vga resolution and frequency comes from the config
  val vgaArea = new SlowArea(config.freq) {

    val hEnd = Bool
    val vEnd = Bool
    val hCounter = Reg(UInt(log2Up(config.hDisplayArea + config.hBackPorch + config.hFrontPorch + config.hRetrace - 1) bits)) init 0
    val vCounter = Reg(UInt(log2Up(config.vDisplayArea + config.vBackPorch + config.vFrontPorch + config.vRetrace - 1) bits)) init 0
    val vSync = Reg(Bool) init False
    val hSync = Reg(Bool) init False

    io.vga.vSync := vSync
    io.vga.hSync := hSync
    io.vga.pixelY := vCounter
    io.vga.pixelX := hCounter

    // Check if the hCounter is at the end of the line
    when (hCounter === (config.hDisplayArea + config.hBackPorch + config.hFrontPorch + config.hRetrace - 1)) {
      hEnd := True
    } otherwise {
      hEnd := False
    }

    // Check if the vCounter is at the end of the frame
    when (vCounter === (config.vDisplayArea + config.vBackPorch + config.vFrontPorch + config.vRetrace - 1)) {
      vEnd := True
    } otherwise {
      vEnd := False
    }

    // Only set hsync when one is in the retrace/sync of a line
    when (hCounter >= (config.hDisplayArea + config.hFrontPorch) & hCounter <= (config.hDisplayArea + config.hFrontPorch + config.hRetrace - 1)) {
      hSync := False
    } otherwise {
      hSync := True
    }

    // Only set vsync when one is in the retrace/sync of a frame
    when (vCounter >= (config.vDisplayArea + config.vFrontPorch) & vCounter <= (config.vDisplayArea + config.vFrontPorch + config.vRetrace - 1)) {
      vSync := False
    } otherwise {
      vSync := True
    }

    // Only read from the buffer when one draw the image
    when (hCounter < config.hDisplayArea & vCounter < config.vDisplayArea) {
      io.vga.videoOn := True
    } otherwise {
      io.vga.videoOn := False
    }

    // Counter calculation
    when (hEnd) {
      hCounter.clearAll()
      when (vEnd) {
        vCounter.clearAll()
      } otherwise(
        vCounter := vCounter + 1
      )
    } otherwise {
      hCounter := hCounter + 1
    }

  }
}