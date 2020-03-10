package mylib
import spinal.core._


class ColorSumming(sourceCount: Int, channelWidth: Int) extends Component {
  val io = new Bundle {
    val sources = in Vec(Color(), sourceCount)
    val result = out(Color())
  }

  var sum = Color()
  sum.clear()
  for (i <- 0 to sourceCount - 1) {
    sum \= sum + io.sources(i)
  }
  io.result := sum
}

object ColorSumming {
  // Let's go
  def main(args: Array[String]) {
    SpinalVerilog(new ColorSumming(2,8))
  }
}