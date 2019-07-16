package blitter

import spinal.core._

class FontRam() extends Component{

  val io = new Bundle{
    val address = in UInt(8 bits)
    val dataIn = in Bits(64 bits)
    val dataOut = out Bits(64 bits)
    val write = in Bool
  }

  val fontRam = new Mem(Bits(32 bits), 256)

  io.dataOut := fontRam.readWriteSync(io.address, io.dataIn, True, io.write)
}
