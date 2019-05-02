package vga

import spinal.core._
import spinal.lib._

class VGAControl(config : VGAConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterface(config))
  }

  val vgaArea = new SlowArea(config.freq) {

    val hEnd = Bool
    val vEnd = Bool
    val hCounter = Reg(UInt(log2Up(config.hDisplayArea + config.hBackPorch + config.hFrontPorch + config.hRetrace - 1) bits))
    val vCounter = Reg(UInt(log2Up(config.vDisplayArea + config.vBackPorch + config.vFrontPorch + config.vRetrace - 1) bits))
    val vSync = Reg(Bool)
    val hSync = Reg(Bool)

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
      hSync := True
    } otherwise {
      hSync := False
    }

    // Only set vsync when one is in the retrace/sync of a frame
    when (vCounter >= (config.vDisplayArea + config.vFrontPorch) & vCounter <= (config.vDisplayArea + config.vFrontPorch + config.vRetrace - 1)) {
      vSync := True
    } otherwise {
      vSync := False
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