package mylib
import spinal.core._
case class Color() extends Bundle {
  val r = UInt(8 bits)
  val g = UInt(8 bits)
  val b = UInt(8 bits)

  def +(that: Color): Color = {
    val result = Color()
    result.r := this.r + that.r
    result.g := this.g + that.g
    result.b := this.b + that.b
    return result
  }

  def clear(): Color ={
    this.r := 0
    this.g := 0
    this.b := 0
    this
  }
}

