package vga

import spinal.core._
import framebuffer._
import drawer._
import spinal.lib.fsm._
//this class is a test class for the GPU primitives

class VGABoiler(config : VGAConfig) extends Component{
  val io = new Bundle {
    val hSync = out Bool
    val vSync = out Bool
    val rgb = out Bits(3 bit)
    val videoOn = out Bool
    val clk = in Bool
    val reset = in Bool
    val a1 = in Bool
    val b1 = in Bool
    val a2 = in Bool
    val b2 = in Bool
    val vgaClock = out Bool

  }
  //noIoPrefix()
  // This line define the clocking speed of the main component
  val vgaClockDomain = ClockDomain.internal("vgaClock", frequency = FixedFrequency(100 MHz))


  // The out commented lines are when a mmcm is needed
  //val pll = new PLL()
  //pll.io.clkIn := io.clk

  //vgaClockDomain.clock := pll.io.clkOut
  vgaClockDomain.clock := io.clk
  vgaClockDomain.reset := io.reset //& !pll.io.isLocked

  //this part making a ClockingArea with a predefined Clocking speed
  val clkArea = new ClockingArea(vgaClockDomain) {

    //instantiate needed objects and Register
    val vga = new BufferControl(config)
    val bresham = new BreshamLine(config)
    val breshamCircle = new BreshamCircle(config)
    val fill = new FillRetancle(config)
    val ballx = Reg(UInt(log2Up(640) bits)) init 60
    val bally = Reg(UInt(log2Up(480) bits)) init 240
    val x = Reg(SInt(3 bits)) init 2
    val y = Reg(SInt(3 bits)) init 1

    val playerOne = RotaryEncoder()
    val paddlePlayerOne = Reg(UInt(log2Up(480) bits)) init 240
    val paddleOneHit = Reg(Bool) init False

    val playerTwo = RotaryEncoder()
    val paddlePlayerTwo = Reg(UInt(log2Up(480) bits)) init 240
    val paddleTwoHit = Reg(Bool) init False

    //connecting some wire
    playerOne.io.a := io.a1
    playerOne.io.b := io.b1
    playerTwo.io.a := io.a2
    playerTwo.io.b := io.b2

    //this when statement controls the paddles for player one
    when(playerOne.io.event & playerOne.io.left) {
      when (((U"0" ## paddlePlayerOne).asSInt - 15 - 10) <= 0) {
        paddlePlayerOne := U"d10"
      } otherwise {
        paddlePlayerOne := paddlePlayerOne - 10
      }
    } elsewhen (playerOne.io.event & !playerOne.io.left) {
      when (paddlePlayerOne + 15 + 10 >= 480) {
        paddlePlayerOne := U"d470"
      } otherwise {
        paddlePlayerOne := paddlePlayerOne + 10
      }
    }

    //this when statement controls the paddles for player two
    when(playerTwo.io.event & playerTwo.io.left) {
      when (((U"0" ## paddlePlayerTwo).asSInt - 15 - 10) <= 0) {
        paddlePlayerTwo := U"d10"
      } otherwise {
        paddlePlayerTwo := paddlePlayerTwo - 10
      }
    } elsewhen (playerTwo.io.event & !playerTwo.io.left) {
      when (paddlePlayerTwo + 15 + 10 >= 480) {
        paddlePlayerTwo := U"d470"
      } otherwise {
        paddlePlayerTwo := paddlePlayerTwo + 10
      }
    }

    //setting the standard values and connecting some wires
    vga.io.vga.hSync <> io.hSync
    vga.io.vga.vSync <> io.vSync
    vga.io.vga.colorEn <> io.videoOn

    fill.io.start := False
    fill.io.coord1(0).clearAll()
    fill.io.coord1(1).clearAll()
    fill.io.coord2(0).clearAll()
    fill.io.coord2(1).clearAll()

    bresham.io.coord1(0).clearAll()
    bresham.io.coord1(1).clearAll()
    bresham.io.coord2(0).clearAll()
    bresham.io.coord2(1).clearAll()
    bresham.io.start := False

    breshamCircle.io.coord(0).clearAll()
    breshamCircle.io.coord(1).clearAll()
    breshamCircle.io.r.clearAll()
    breshamCircle.io.start := False

    vga.io.wValid := False
    vga.io.wAddress.clearAll()
    vga.io.wData(0).clearAll()
    vga.io.wData(1).clearAll()
    vga.io.wData(2).clearAll()
    vga.io.switch := False

    //this is the state machine for the demo. The demo is a Pong clone, and all the graphic are build from the GPU primitives
    val demo = new StateMachine {
      val idle = new State with EntryPoint
      val playfield = new State
      val upperSideLine = new State
      val leftSideLine = new State
      val lowerSideLine = new State
      val rightSideLine = new State
      val middleLine = new State
      val circleMiddleLine = new State
      val wait2Redraw = new State
      val ball = new State
      val leftPadle = new State
      val rightPadle = new State

      idle.whenIsActive{

        fill.io.coord1(0) := U"d0"
        fill.io.coord1(1) := U"d0"
        fill.io.coord2(0) := U"d640"
        fill.io.coord2(1) := U"d480"
        fill.io.start := True
        goto(playfield)

      }

      playfield.whenIsActive {
        vga.io.wValid := fill.io.setPixel
        vga.io.wAddress:= fill.io.address
        vga.io.wData(0) := 0
        vga.io.wData(1) := B"1"
        vga.io.wData(2) := 0
        when(fill.io.ready) {
          bresham.io.coord1(0) := U"d10"
          bresham.io.coord1(1) := U"d10"
          bresham.io.coord2(0) := U"d630"
          bresham.io.coord2(1) := U"d10"
          bresham.io.start := True
          goto(upperSideLine)
        }
      }

      upperSideLine.whenIsActive{
        vga.io.wValid := bresham.io.setPixel
        vga.io.wAddress:= (bresham.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresham.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0).setAll()
        vga.io.wData(1).setAll()
        vga.io.wData(2).setAll()
        when (bresham.io.ready) {
          bresham.io.coord1(0) := U"d10"
          bresham.io.coord1(1) := U"d10"
          bresham.io.coord2(0) := U"d10"
          bresham.io.coord2(1) := U"d470"
          bresham.io.start := True
          goto(leftSideLine)
        }
      }

      leftSideLine.whenIsActive{
        vga.io.wValid := bresham.io.setPixel
        vga.io.wAddress:= (bresham.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresham.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0).setAll()
        vga.io.wData(1).setAll()
        vga.io.wData(2).setAll()
        when (bresham.io.ready) {
          bresham.io.coord1(0) := U"d10"
          bresham.io.coord1(1) := U"d470"
          bresham.io.coord2(0) := U"d630"
          bresham.io.coord2(1) := U"d470"
          bresham.io.start := True
          goto(lowerSideLine)
        }
      }

      lowerSideLine.whenIsActive{
        vga.io.wValid := bresham.io.setPixel
        vga.io.wAddress:= (bresham.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresham.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0).setAll()
        vga.io.wData(1).setAll()
        vga.io.wData(2).setAll()
        when (bresham.io.ready) {
          bresham.io.coord1(0) := U"d630"
          bresham.io.coord1(1) := U"d10"
          bresham.io.coord2(0) := U"d630"
          bresham.io.coord2(1) := U"d470"
          bresham.io.start := True
          goto(rightSideLine)
        }
      }

      rightSideLine.whenIsActive{
        vga.io.wValid := bresham.io.setPixel
        vga.io.wAddress:= (bresham.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresham.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0).setAll()
        vga.io.wData(1).setAll()
        vga.io.wData(2).setAll()
        when (bresham.io.ready) {
          bresham.io.coord1(0) := U"d310"
          bresham.io.coord1(1) := U"d10"
          bresham.io.coord2(0) := U"d310"
          bresham.io.coord2(1) := U"d470"
          bresham.io.start := True
          goto(middleLine)
        }
      }

      middleLine.whenIsActive{
        vga.io.wValid := bresham.io.setPixel
        vga.io.wAddress:= (bresham.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## bresham.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0).setAll()
        vga.io.wData(1).setAll()
        vga.io.wData(2).setAll()
        when (bresham.io.ready) {
          breshamCircle.io.coord(0) := U"d310"
          breshamCircle.io.coord(1) := U"d230"
          breshamCircle.io.r := U"d30"
          breshamCircle.io.start := True
          goto(circleMiddleLine)
        }
      }

      circleMiddleLine.whenIsActive {
        vga.io.wValid := breshamCircle.io.setPixel
        vga.io.wAddress:= (breshamCircle.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## breshamCircle.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0).setAll()
        vga.io.wData(1).setAll()
        vga.io.wData(2).setAll()
        when(breshamCircle.io.ready) {
          breshamCircle.io.coord(0) := ballx.resized
          breshamCircle.io.coord(1) := bally.resized
          breshamCircle.io.r := U"d2"
          breshamCircle.io.start := True
          goto(ball)
        }
      }

      ball.whenIsActive{
        vga.io.wValid := breshamCircle.io.setPixel
        vga.io.wAddress:= (breshamCircle.io.address(1).resize(log2Up(config.vDisplayBuffer)) ## breshamCircle.io.address(0).resize(log2Up(config.hDisplayBuffer))).asUInt
        vga.io.wData(0)clearAll()
        vga.io.wData(1).clearAll()
        vga.io.wData(2).clearAll()
        when(breshamCircle.io.ready) {
          fill.io.coord1(0) := U"d15"
          fill.io.coord1(1) :=paddlePlayerOne - U"d15"
          fill.io.coord2(0) := U"d18"
          fill.io.coord2(1) := paddlePlayerOne + U"d15"
          fill.io.start := True
          goto(leftPadle)
        }
      }

      leftPadle.whenIsActive{
        vga.io.wValid := fill.io.setPixel
        vga.io.wAddress:= fill.io.address
        vga.io.wData(0) := B"1"
        vga.io.wData(1) := 0
        vga.io.wData(2) := 0
          when(fill.io.ready) {
            fill.io.coord1(0) := U"d622"
            fill.io.coord1(1) := paddlePlayerTwo - U"d15"
            fill.io.coord2(0) := U"d625"
            fill.io.coord2(1) := paddlePlayerTwo + U"d15"
            fill.io.start := True
            goto(rightPadle)
          }
      }

      rightPadle.whenIsActive {
        vga.io.wValid := fill.io.setPixel
        vga.io.wAddress := fill.io.address
        vga.io.wData(0) := 0
        vga.io.wData(1) := 0
        vga.io.wData(2) := B"1"
        when(fill.io.ready) {
          goto(wait2Redraw)
        }
      }

      wait2Redraw.whenIsActive{

          when (!vga.io.vga.vSync) {
            ballx := (ballx.asSInt + x).asUInt
            bally := (bally.asSInt + y).asUInt
            when(ballx === 630 || paddleOneHit || ballx === 10 || paddleTwoHit) {
              x := -x
              ballx := (ballx.asSInt + (-x)).asUInt
            }
            when(bally === 470 || bally === 10) {
              y := -y
              bally := (bally.asSInt + (-y)).asUInt
            }
            vga.io.switch := True
            goto(idle)
          }
      }

    }

    when (ballx === 18 & bally >= paddlePlayerOne -15 & bally <= paddlePlayerOne + 15) {
      paddleOneHit := True
    } otherwise {
      paddleOneHit := False
    }

    when (ballx === 622 & bally >= paddlePlayerTwo -15 & bally <= paddlePlayerTwo + 15) {
      paddleTwoHit := True
    } otherwise {
      paddleTwoHit := False
    }

    io.rgb := vga.io.vga.rgb(2) ## vga.io.vga.rgb(1) ## vga.io.vga.rgb(0)



  }




}

object VGABoiler {
  def main(args: Array[String]) {
    //targetDirectory="gen/src/vhdl"

    SpinalVhdl(new VGABoiler(VGAConfig.setAs_640_480_60))
/*
    val temp = VivadoFlow(
      vivadoPath = "/opt/Xilinx/Vivado/2017.3/bin",
      workspacePath = "./flow/",
      toplevelPath = "VGABoiler.vhd",
      family = "Artix 7", device = "xc7a100tcsg324-1",
      frequencyTarget = 100 MHz,
      constraintPath = "NEXYS4DDR.xdc",
      mmcm = true,
      writeBitstream = true)

    println(temp.getArea())
    println(temp.getFMax())

*/
  }
}
