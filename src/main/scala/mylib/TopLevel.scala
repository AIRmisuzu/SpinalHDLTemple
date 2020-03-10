package mylib

import spinal.core._
import spinal.lib._

import scala.util.Random

class TopLevel(resolutionWidth : Int,sampleCount : Int) extends Component {
  val io = new Bundle {
    val sin = out SInt(resolutionWidth bits)
    val sinFiltred = out SInt(resolutionWidth bits)
  }
  // Here will come the logic implementation
  def sinTable = for(sampleIndex <- 0 until sampleCount) yield {
  val sinValue = Math.sin(2 * Math.PI * sampleIndex / sampleCount)
  S((sinValue * ((1<<resolutionWidth)/2-1)).toInt,resolutionWidth bits)
}

val rom =  Mem(SInt(resolutionWidth bits),initialContent = sinTable)
val phase = Reg(UInt(log2Up(sampleCount) bits)) init(0)
phase := phase + 1

io.sin := rom.readSync(phase)
io.sinFiltred := RegNext(io.sinFiltred  - (io.sinFiltred  >> 5) + (io.sin >> 5)) init(0)
}


object TopLevelVerilog {
  def main(args: Array[String]) {
    SpinalVerilog(new TopLevel(8,256))
  }
}