package router

import spinal.core._
import spinal.sim._
import spinal.core.sim._
import scala.util.hashing.MurmurHash3

class MyMurmurHash()extends Component{

}

object  Murmur_software_test
{
  def main(args: Array[String]) {
    val z :Int = 56
    val a : Array[Byte]= Array(2.toByte,0.toByte,0.toByte,0.toByte)
    val b = MurmurHash3.bytesHash(a)
    println("Test"+b)
  }
}  