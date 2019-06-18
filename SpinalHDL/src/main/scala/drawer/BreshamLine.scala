package drawer

import spinal.core._
import spinal.lib.fsm._
import vga._

class BreshamLine(config : VGAConfig) extends Component{

  val io = new Bundle {
    val coord1 = in Vec(UInt(1 + log2Up(config.hDisplayArea) bits), UInt(1 + log2Up(config.vDisplayArea) bits))
    val coord2 = in Vec(UInt(1 + log2Up(config.hDisplayArea) bits), UInt(1 + log2Up(config.vDisplayArea) bits))
    val start = in Bool
    val ready = out Bool
    val address = out Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits))
    val setPixel = out Bool
  }

  val dx = Reg(SInt(1 + log2Up(config.hDisplayArea) bits)) init 0

  val dy = Reg(SInt(1 + log2Up(config.vDisplayArea) bits)) init 0

  val down = Reg(Bool) init False
  val right = Reg(Bool) init False
  val downTemp = Bool
  val rightTemp = Bool
  val err = Reg(SInt(1 + (log2Up(config.hDisplayArea) + log2Up(config.vDisplayArea)) bits)) init 0
  val e2 = SInt(1 + (log2Up(config.hDisplayArea) + log2Up(config.vDisplayArea)) bits)
  val errTemp = SInt(1 + (log2Up(config.hDisplayArea) + log2Up(config.vDisplayArea)) bits)
  val x = Reg(UInt (log2Up(config.hDisplayArea) bits)) init 0
  val x2 = Reg(UInt (log2Up(config.hDisplayArea) bits)) init 0
  val y = Reg(UInt (log2Up(config.vDisplayArea) bits)) init 0
  val y2 = Reg(UInt (log2Up(config.vDisplayArea) bits)) init 0

  io.ready := True
  io.address(0) := x
  io.address(1) := y
  downTemp.clear()
  rightTemp.clear()
  e2.clearAll()
  errTemp.clearAll()
  io.setPixel := False

  val breshamSM = new StateMachine {
    val idle = new State with EntryPoint
    val calc = new State
    val calc2 = new State
    val running = new State

    idle.whenIsActive{
      when(io.start) {
        dx := (io.coord2(0).asSInt - io.coord1(0).asSInt).resized
        dy := (io.coord2(1).asSInt - io.coord1(1).asSInt).resized
        x := io.coord1(0).resized
        y := io.coord1(1).resized
        x2 := io.coord2(0).resized
        y2 := io.coord2(1).resized
        goto(calc)
      }
    }

    calc.whenIsActive{
      io.ready := False
      rightTemp := (dx > 0)
      downTemp := (dy > 0)

      when (!rightTemp) {
        dx := - dx
      }
      when (downTemp) {
        dy := - dy
      }
      right := rightTemp
      down := downTemp
      goto(calc2)
    }

    calc2.whenIsActive{
      io.ready := False
      err := (dx + dy).resized
      goto(running)
    }

    running.whenIsActive{
      io.setPixel:= True
      io.ready := False

      when (x === x2 & y === y2) {
        goto(idle)
      }
      e2 := (err << 1).resized
      when (e2 >= dy) {
        err := err + dy
        when (right) {
          x := x + 1
        } otherwise {
          x := x - 1
        }
      } elsewhen (e2 <= dx) {
        err := err + dx
        when (down) {
          y := y + 1
        } otherwise {
          y := y - 1
        }
      }

    }
  }

}
