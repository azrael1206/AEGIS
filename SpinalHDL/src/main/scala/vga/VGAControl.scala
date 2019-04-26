package vga

import spinal.core._
import spinal.lib._

class VGAControl(config : VGAConfig) extends Component{

  val io = new Bundle {
    val clk = Bool
    val reset = Bool
    val vga = master(VGAInterface(config))
  }

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

  when (hCounter === (config.hDisplayArea + config.hBackPorch + config.hFrontPorch + config.hRetrace - 1)) {
    hEnd := True
  } otherwise {
    hEnd := False
  }

  when (vCounter === (config.vDisplayArea + config.vBackPorch + config.vFrontPorch + config.vRetrace - 1)) {
    vEnd := True
  } otherwise {
    vEnd := False
  }

  when (hCounter >= (config.hDisplayArea + config.hFrontPorch) & hCounter <= (config.hDisplayArea + config.hFrontPorch + config.hRetrace - 1)) {
    hSync := True
  } otherwise {
    hSync := False
  }

  when (vCounter >= (config.vDisplayArea + config.vFrontPorch) & vCounter <= (config.vDisplayArea + config.vFrontPorch + config.vRetrace - 1)) {
    hSync := True
  } otherwise {
    hSync := False
  }

  when (hCounter < config.hDisplayArea & vCounter < config.vDisplayArea) {
    io.vga.videoOn := True
  } otherwise {
    io.vga.videoOn := False
  }

  val vgaClockDomain = ClockDomain.internal("vgaClockName")

  vgaClockDomain.clock := io.clk
  vgaClockDomain.reset := io.reset

  val vgaArea = new ClockingArea(vgaClockDomain) {

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
