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

  //setting the standard values for the framebuffer
  io.write := False
  io.ready := True

  //Counter for the x and y coordinates
  val x = Reg(UInt(4 bits)) init 0
  val y = Reg(UInt(4 bits)) init 0

  //setting the address for the framebuffer
  io.addressOut := ((io.addressXIn + x).resize(log2Up (config.hDisplayBuffer)) ## (io.addressYIn + y).resize(1 + log2Up (config.vDisplayBuffer))).asUInt

  //State machine: this copy the 8x8 pixel font into the framebuffer
  val state = new StateMachine {
    val idle = new State with EntryPoint
    val copy = new State

    //the idle State, when the start signal is high the x and y register are both set to zero
    idle.whenIsActive {
      when(io.start) {
        x := 0
        y := 0
        goto(copy)
      }
    }

    //this state copy the 64 pixel into the framebuffer and setting the ready signal to false.
    //Also it increment the x and y register
    copy.whenIsActive {
      io.ready := False
      switch(x * y) {
        for (i <- 0 to 63) {
          is(i) {
            io.write := io.font(63 - i)
          }
        }
      }

      when(x + 1 < 8 & y + 1 < 8) {
        goto(idle)
      } elsewhen (x + 1 < 8) {
        x := x + 1
      } otherwise {
        x := 0
        y := y + 1
      }
    }
  }
}
