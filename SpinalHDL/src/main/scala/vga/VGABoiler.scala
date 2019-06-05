package vga

import spinal.core._
import framebuffer._
import drawer._

class VGABoiler(config : VGAConfig) extends Component{
  val io = new Bundle {
    val sw = in Bits(6 bit)
    val hSync = out Bool
    val vSync = out Bool
    val rgb = out Bits(3 bit)
    val clk = in Bool
    val reset = in Bool
  }
  //noIoPrefix()
  // Has to be this way, cause frequency for 720p is weird
  val vgaClockDomain = ClockDomain.internal("vgaClock", frequency = FixedFrequency(100.7 MHz))

  // The rest is just for testing purposes
  //val pll = new PLL()
  //pll.io.clkIn := io.clk

  //vgaClockDomain.clock := pll.io.clkOut
  vgaClockDomain.clock := io.clk
  vgaClockDomain.reset := io.reset //& !pll.io.isLocked

  val clkArea = new ClockingArea(vgaClockDomain) {
    val vga = new BufferControl(config)
    val counter = Reg(UInt (log2Up(config.vDisplayArea) + log2Up(config.hDisplayArea) bits)) init 0
    val bresham = new BreshamLine(config)
    val breshamCircle = new BreshamCircle(config)

    vga.io.vga.hSync <> io.hSync
    vga.io.vga.vSync <> io.vSync
    /*bresham.io.colorIn(0) := io.sw(0).asBits
    bresham.io.colorIn(1) := io.sw(1).asBits
    bresham.io.colorIn(2) := io.sw(2).asBits
    bresham.io.start := True
    bresham.io.coord1(0) := 0
    bresham.io.coord1(1) := 0
    bresham.io.coord2(0) := U"d640"
    bresham.io.coord2(1) := U"d480"*/
    breshamCircle.io.coord(0) := U"d320"
    breshamCircle.io.coord(1) := U"d50"
    breshamCircle.io.r := U"d100"
    breshamCircle.io.start := True
    io.rgb := vga.io.vga.rgb(2) ## vga.io.vga.rgb(1) ## vga.io.vga.rgb(0)
    vga.io.wValid := breshamCircle.io.setPixel
    vga.io.wData(0) := io.sw(0).asBits
    vga.io.wData(1) := io.sw(1).asBits
    vga.io.wData(2) := io.sw(2).asBits
    vga.io.wAddress := (breshamCircle.io.address(1) ## breshamCircle.io.address(0)).asUInt

  }

}

object VGABoiler {
  def main(args: Array[String]) {
    //targetDirectory="gen/src/vhdl"

    SpinalVhdl(new VGABoiler(VGAConfig.setAs_640_480_60))

    val temp = VivadoFlow(
      vivadoPath = "/opt/Xilinx/Vivado/2017.3/bin",
      workspacePath = "./flow/",
      toplevelPath = "VGABoiler.vhd",
      family = "Artix 7", device = "xc7a100tcsg324-1",
      frequencyTarget = 100.7 MHz,
      constraintPath = "NEXYS4DDR.xdc",
      mmcm = true,
      writeBitstream = true)

    println(temp.getArea())
    println(temp.getFMax())


  }
}
