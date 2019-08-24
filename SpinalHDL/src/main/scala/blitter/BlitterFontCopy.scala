package blitter

import spinal.core._
import spinal.lib.fsm._
import vga._

class BlitterFontCopy(config : VGAConfig) extends Component {
  val io = new Bundle {
    val addressOut = out (UInt(1 + log2Up(config.vDisplayBuffer) + log2Up(config.hDisplayBuffer) bits))
    val addressXIn = in (UInt(log2Up(config.hDisplayBuffer) bits))
    val addressYIn = in (UInt(log2Up(config.vDisplayBuffer) bits))
    val font = in (Bits(64 bits))
    val write = out Bool
    val start = in Bool
    val ready = out Bool
  }

  io.write := False
  io.ready := True

  val x = Reg(UInt(4 bits)) init 0
  val y = Reg(UInt(4 bits)) init 0

  io.addressOut := ((io.addressXIn + x).resize(log2Up (config.hDisplayBuffer)) ## (io.addressYIn + y).resize(1 + log2Up (config.vDisplayBuffer))).asUInt

  val state = new StateMachine {
    val idle = new State with EntryPoint
    val copy = new State

    idle.whenIsActive{
      when(io.start) {
        x := 0
        y := 0
        goto(copy)
      }
    }

    copy.whenIsActive{
      io.ready := False
      switch(x * y) {
        for (i <- 0 to 63) {
          is(i) {
            io.write := io.font(63 - i)
          }
        }
      }

      when (x + 1 < 8 & y + 1 < 8) {
        goto(idle)
      } elsewhen(x + 1 < 8) {
        x := x + 1
      } otherwise {
        x := 0
        y := y + 1
      }
    }
  }
}
