package drawer

import spinal.core._
import spinal.lib.fsm._
import vga._


class FillRetancle (config : VGAConfig) extends Component {

  val io = new Bundle{
    val coord1 = in Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits))
    val coord2 = in Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits))
    val colorIn = in Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
    val start = in Bool
    val ready = out Bool
    val address = out UInt(log2Up(config.hDisplayArea) + log2Up(config.vDisplayArea) bits)
    val colorOut = out Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits))
  }

  val counterX = Reg(UInt (log2Up(config.hDisplayArea) bits))
  val counterY = Reg(UInt (log2Up(config.vDisplayArea) bits))
  val x1 = Reg(UInt (log2Up(config.hDisplayArea) bits))
  val x2 = Reg(UInt (log2Up(config.hDisplayArea) bits))
  val y2 = Reg(UInt (log2Up(config.vDisplayArea) bits))

  io.address := (counterY ## counterX).asUInt
  io.colorOut := io.colorIn

  val fill = new StateMachine {
    val idle = new State with EntryPoint
    val fill = new State

    idle.whenIsActive {
      io.ready := True
      when (io.start) {
        counterX := io.coord1(0)
        counterY := io.coord1(1)
        x1 := io.coord1(0)
        x2 := io.coord2(0)
        y2 := io.coord2(1)
      }
    }

    fill.whenIsActive {
      io.ready := False
      when(y2 - 1 === counterY & x2 - 1 === counterX) {
        goto(idle)
      } elsewhen(x2 - 1 === counterX) {
        counterY := counterY + 1
        counterX := x1
      } otherwise {
        counterX := counterX + 1
      }
    }

  }
}
