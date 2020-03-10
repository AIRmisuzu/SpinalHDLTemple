package router
import spinal.core._
class Add()extends Component{
  val io = new Bundle{
    val a = in(Bool)
    val c = out(Reg(Bool))
  }
    io.c := io.a

    noIoPrefix()
}
object Add{
  def main(args: Array[String]) {
    SpinalSystemVerilog(new Add())
  }
}