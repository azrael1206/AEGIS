package drawer

import spinal.core._
import spinal.lib.fsm._
import vga.VGAConfig

class BreshamCircle (config : VGAConfig) extends Component{

  val io = new Bundle {
    val coord = in Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits))
    val r = in UInt(log2Up(config.hDisplayArea) bits)
    val start = in Bool
    val ready = out Bool
    val setPixel = out Bool
    val address = out Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits))
  }


  val x = Reg(SInt(2 + log2Up(config.hDisplayArea) bits)) init 0
  val y = Reg(SInt(2 + log2Up(config.vDisplayArea) bits)) init 0
  val err = Reg(SInt(2 + (log2Up(config.hDisplayArea) + log2Up(config.vDisplayArea)) bits)) init 0
  val rTemp = Reg(SInt(2 + (log2Up(config.hDisplayArea) + log2Up(config.vDisplayArea)) bits)) init 0
  val x1 = Reg(UInt(1 + log2Up(config.hDisplayArea) bits)) init 0
  val y1 = Reg(UInt(1 + log2Up(config.vDisplayArea) bits)) init 0
  io.address(0).clearAll()
  io.address(1).clearAll()
  io.ready := True
  io.setPixel := False
  val BreshamCircSM = new StateMachine {
    val idle = new State with EntryPoint
    val setPixel1 = new State
    val setPixel2 = new State
    val setPixel3 = new State
    val setPixel4 = new State
    val calcEnd = new State
    val calcEnd2 = new State


    idle.whenIsActive{
      when (io.start) {
        x1 := io.coord(0).resized
        y1 := io.coord(1).resized
        x := (- io.r.asSInt).resized
        y := 0
        err := (2 - (io.r << 1).asSInt).resized
        goto(setPixel1)
      }
    }

    setPixel1.whenIsActive{
      io.ready := False
      io.setPixel := True
      io.address(0)  := (x1.asSInt - x).asUInt.resized
      io.address(1) := (y1.asSInt + y).asUInt.resized
      goto(setPixel2)
    }

    setPixel2.whenIsActive{
      io.ready := False
      io.setPixel := True
      io.address(0) := (x1.asSInt - y).asUInt.resized
      io.address(1):= (y1.asSInt - x).asUInt.resized
      goto(setPixel3)
    }

    setPixel3.whenIsActive{
      io.ready := False
      io.setPixel := True
      io.address(0)  := (x1.asSInt + x).asUInt.resized
      io.address(1) := (y1.asSInt - y).asUInt.resized
      goto(setPixel4)
    }

    setPixel4.whenIsActive{
      io.ready := False
      io.setPixel := True
      io.address(0)  := (x1.asSInt + y).asUInt.resized
      io.address(1) := (y1.asSInt + x).asUInt.resized
      goto(calcEnd)
    }

    calcEnd.whenIsActive{
      io.ready := False
      rTemp := err
      when (err <= y) {
        y := y + 1
        err := err + ((1 + y) << 1) + 1
      }
      goto(calcEnd2)
    }

    calcEnd2.whenIsActive{
      io.ready := False
      when (rTemp > x || err > y) {
        x := x + 1
        err := err + ((1 + x) << 1) + 1
      }
      when (x >= 0) {
        goto(idle)
      } otherwise {
        goto(setPixel1)
      }
    }

  }

}
