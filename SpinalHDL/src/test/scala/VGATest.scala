import framebuffer.BufferControl
import spinal.sim._
import spinal.lib._
import spinal.core._
import spinal.core.sim._
import vga._

object VGATest {
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.allOptimisation.compile(new VGABoiler(VGAConfig.setAs_640_480_60)).doSim { dut =>
      val clockDomain = ClockDomain(dut.io.clk, dut.io.reset)
      clockDomain.forkStimulus(10)

      clockDomain.waitRisingEdge(1000000)

      clockDomain.waitRisingEdge(10000000)
    }
  }
}