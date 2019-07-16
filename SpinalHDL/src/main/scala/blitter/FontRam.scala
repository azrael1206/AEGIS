package blitter

import spinal.core._

class FontRam() extends Component{

  val io = new Bundle{
    val address = in UInt(8 bits)
    val address2 = in UInt(8 bits)
    val dataIn = in Bits(32 bits)
    val dataOut = out Bits(32 bits)
    val dataOut2 = out Bits(32 bits)
    val write = in Bool
  }

  val fontRam = new Mem(Bits(32 bits), 256)

  io.dataOut := fontRam.readWriteSync(io.address, io.dataIn, True, io.write)
  io.dataOut2 := fontRam.readSync(io.address2,True)
}
