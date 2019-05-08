package vga

import spinal.core._
import framebuffer._

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

    vga.io.vga.hSync <> io.hSync
    vga.io.vga.vSync <> io.vSync

    io.rgb := vga.io.vga.rgb(2) ## vga.io.vga.rgb(1) ## vga.io.vga.rgb(0)
    vga.io.wValid := True
    vga.io.wData(0) := io.sw(0).asBits
    vga.io.wData(1) := io.sw(1).asBits
    vga.io.wData(2) := io.sw(2).asBits

    when (counter <=(1024*512)/2 & !io.sw(3)) {
      vga.io.wValid := False
    } elsewhen (counter >(1024*512)/2 & io.sw(3)){
      vga.io.wValid := False
    }
    vga.io.wAddress := counter
    counter := counter + 1
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
