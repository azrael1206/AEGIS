package blitter

import drawer.{BreshamCircle, BreshamLine, FillRetancle}
import framebuffer.BufferControl
import spinal.core._
import spinal.lib._
import spinal.lib.bus.simple._
import spinal.lib.fsm._
import vga._
import vexriscv._

class MCP(config : VGAConfig, piplinedBusConfig : PipelinedMemoryBusConfig) extends Component{

  val io = new Bundle {
    val vga = master(VGAInterfaceOut(config))
    val bus = slave(PipelinedMemoryBus(piplinedBusConfig))
  }

  val programFiFo = new StreamFifo (
    dataType = Bits(32 bits),
    depth    = 128
  )
  programFiFo.io.push.payload <> io.bus.cmd.data
  programFiFo.io.push.valid <> io.bus.cmd.valid
  programFiFo.io.push.ready <> io.bus.cmd.ready

  io.bus.rsp.data.clearAll()
  io.bus.rsp.valid := False

  val inst = Reg(Bits(32 bits)) init 0
  val storeVals1  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeVals2  = Reg(Vec(UInt(log2Up(config.hDisplayArea) bits), UInt(log2Up(config.vDisplayArea) bits)))
  val storeRadius = Reg(UInt(log2Up(config.hDisplayArea) bits)) init 0
  val storeColor  = Reg(Vec(Bits(config.colorR bits), Bits(config.colorG bits), Bits(config.colorB bits)))

  val vga = new BufferControl(config)
  val bresLine = new BreshamLine(config)
  val bresCircle = new BreshamCircle(config)
  val fillRect = new FillRetancle(config)

  vga.io.wAddress.clearAll()
  vga.io.wData(0).clearAll()
  vga.io.wData(1).clearAll()
  vga.io.wData(2).clearAll()
  vga.io.wValid.clear()
  vga.io.switch.clear()

  fillRect.io.start := False
  fillRect.io.coord1(0).clearAll()
  fillRect.io.coord1(1).clearAll()
  fillRect.io.coord2(0).clearAll()
  fillRect.io.coord2(1).clearAll()

  bresLine.io.coord1(0).clearAll()
  bresLine.io.coord1(1).clearAll()
  bresLine.io.coord2(0).clearAll()
  bresLine.io.coord2(1).clearAll()
  bresLine.io.start := False

  bresCircle.io.coord(0).clearAll()
  bresCircle.io.coord(1).clearAll()
  bresCircle.io.r.clearAll()
  bresCircle.io.start := False

  vga.io.vga.hSync <> io.vga.hSync
  vga.io.vga.vSync <> io.vga.vSync
  io.vga.rgb := vga.io.vga.rgb

  programFiFo.io.pop.ready := True


  val opAutomaton = new StateMachine{
    val idleLoad = new State with EntryPoint
    val decode = new State
    val store = new State
    val run = new State
    val stall = new State

    idleLoad.whenIsActive{
      when(programFiFo.io.pop.valid){
        inst := programFiFo.io.pop.payload
        goto(decode)
      }
    }

    decode.whenIsActive{
      programFiFo.io.pop.ready := False

      when(inst(0)) {
        goto(store)
      } elsewhen(inst(1)) {
        goto(run)
      } otherwise {
        goto(idleLoad)
      }
    }

    store.whenIsActive{
      programFiFo.io.pop.ready := False
      switch(inst(7 downto 4)) {
        is(B"0000"){
          storeVals1(0) := inst(21 downto 10).asUInt.resized
          storeVals1(1) := inst(31 downto 22).asUInt.resized
        }
        is(B"0001"){
          storeVals2(0) := inst(21 downto 10).asUInt.resized
          storeVals2(1) := inst(31 downto 22).asUInt.resized
        }
        is(B"0010"){
          storeRadius := inst(21 downto 10).asUInt.resized
        }
        is(B"0011"){
          storeColor(0) := inst(15 downto 8).resized
          storeColor(1) := inst(23 downto 16).resized
          storeColor(2) := inst(31 downto 25).resized
        }
      }
      goto(idleLoad)
    }

    run.whenIsActive{
      programFiFo.io.pop.ready := False
      switch(inst(7 downto 4)) {
        is(B"0000"){
          bresLine.io.coord1 := storeVals1
          bresLine.io.coord2 := storeVals2
          bresLine.io.start := True

        }
        is(B"0001"){
          bresCircle.io.coord := storeVals1
          bresCircle.io.r := storeRadius
          bresCircle.io.start := True

        }
        is(B"0010"){
          fillRect.io.coord1 := storeVals1
          fillRect.io.coord2 := storeVals2
          fillRect.io.start := True

        }
        is(B"0011"){
          vga.io.switch := True
          goto(idleLoad)
        }
        goto(stall)
      }

      stall.whenIsActive{
        programFiFo.io.pop.ready := False
        switch(inst(7 downto 4)) {
          is(B"0000") {
            vga.io.wAddress := (bresLine.io.address(1).resize(log2Up(config.vDisplayArea)) ## bresLine.io.address(0).resize(log2Up(config.hDisplayArea))).asUInt
            vga.io.wData := storeColor
            vga.io.wValid := bresLine.io.setPixel

          }
          is(B"0001") {
            vga.io.wAddress := (bresCircle.io.address(1).resize(log2Up(config.vDisplayArea)) ## bresCircle.io.address(0).resize(log2Up(config.hDisplayArea))).asUInt
            vga.io.wData := storeColor
            vga.io.wValid := bresCircle.io.setPixel
          }
          is(B"0010") {
            vga.io.wAddress := fillRect.io.address
            vga.io.wData := storeColor
            vga.io.wValid := fillRect.io.setPixel

          }
        }
        when(bresLine.io.ready & bresCircle.io.ready & fillRect.io.ready){
          goto(idleLoad )
        }
      }

    }

  }

}