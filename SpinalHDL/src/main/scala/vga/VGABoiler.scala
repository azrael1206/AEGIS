package vga

import spinal.core._

class VGABoiler extends Component{
  val io = new Bundle {
    val sw = in Bits(3 bit)
    val hSync = out Bool
    val vSync = out Bool
    val rgb = out Bits(3 bit)
    val clk = in Bool
    val reset = in Bool
  }
  // Has to be this way, cause frequency for 720p is weird
  val vgaClockDomain = ClockDomain.internal("vgaClock", frequency = FixedFrequency(148.5 MHz))

  // The rest is just for testing purposes
  val pll = new PLL()
  pll.io.clkIn := io.clk

  vgaClockDomain.clock := pll.io.clkOut
  vgaClockDomain.reset := io.reset & !pll.io.isLocked

  val clkArea = new ClockingArea(vgaClockDomain) {
    val vga = new VGAControl(new VGAConfig())


    vga.io.vga.hSync <> io.hSync
    vga.io.vga.vSync <> io.vSync

    when(vga.io.vga.videoOn === True) {
      io.rgb := io.sw
    } otherwise {
      io.rgb := B"000"
    }
  }

}

object VGABoiler {
  def main(args: Array[String]) {
    //targetDirectory="gen/src/vhdl"
    new SpinalConfig(
      defaultClockDomainFrequency = FixedFrequency(148.5 MHz)
    ).generateVhdl(new VGABoiler())

    val temp = VivadoFlow(
      vivadoPath = "/opt/Xilinx/Vivado/2017.3/bin",
      workspacePath = "./flow/",
      toplevelPath = "VGABoiler.vhd",
      family = "Artix 7", device = "xc7a100tcsg324-1",
      frequencyTarget = 148.5 MHz,
      constraintPath = "NEXYS4DDR.xdc",
      mmcm = true,
      writeBitstream = true)

    println(temp.getArea())
    println(temp.getFMax())


  }
}
