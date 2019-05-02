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
      vSync := True
    } otherwise {
      vSync := False
    }

    when (hCounter < config.hDisplayArea & vCounter < config.vDisplayArea) {
      io.vga.videoOn := True
    } otherwise {
      io.vga.videoOn := False
    }

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


/*
import spinal.core._
import spinal.core.sim._
import spinal.sim._
import vga._

object VGATestSim {
  def main(args: Array[String]): Unit = {
    SimConfig.allOptimisation.compile(new VGAControl(new VGAConfig())).doSimUntilVoid{
      dut =>
        dut.clockDomain.forkStimulus(10)
    }
  }
}
*/