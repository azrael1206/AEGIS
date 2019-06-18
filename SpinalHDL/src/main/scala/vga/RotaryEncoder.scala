package vga

import spinal.core._

case class RotaryEncoder() extends Component {
  val io = new Bundle {
    val a = in Bool
    val b = in Bool
    val left = out Bool
    val event = out Bool
  }

  val rotaryIn = Bits(2 bits)
  val rotaryQ1 = Reg(Bool) init False
  val rotaryQ1Next = Reg(Bool) init False
  val rotaryQ2 = Reg(Bool) init False
  val rotaryLeft = Reg(Bool) init False
  val rotaryEvent = Reg(Bool) init False

  rotaryIn := io.b ## io.a
  io.left := rotaryLeft
  io.event := rotaryEvent
  rotaryQ1Next := rotaryQ1

  switch(rotaryIn) {
    is (B"00") {
      rotaryQ1 := False
    }
    is (B"01") {
      rotaryQ2 := False
    }
    is (B"10") {
      rotaryQ2 := True
    }
    is (B"11") {
      rotaryQ1 := True
    }
  }

  when (!rotaryQ1Next & rotaryQ1) {
    rotaryEvent := True
    rotaryLeft := rotaryQ2
  } otherwise {
    rotaryEvent := False
  }

}
