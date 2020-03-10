package router
import spinal.core._


object opcode_enum extends SpinalEnum {
  val idle,insert, delete,search = newElement()
}

case class Hash_Data()extends Bundle {
  val key     = UInt(32 bits)
  val value   = UInt(16 bits)
  val bucket  = UInt(8 bits)
  val opcode  = opcode_enum()
  
  def compare(that:Hash_Data):Bool=(this.key===that.key)&&(this.value===that.value)
}

class Hash_Data_test() extends Component{
  val io = new Bundle{
    val a = in(Vec(Hash_Data(),2))
    val b = in(Hash_Data())
    val c = out (Reg(Bool))
    val d = out (Bool)
  }
    val add = new Add()
    io.c := io.a(1).compare(io.b)
    add.io.a := io.c
    io.d := add.io.c
}


object Hash_Data_test{
  def main(args: Array[String]) {
    SpinalSystemVerilog(new Hash_Data_test())
  }
}