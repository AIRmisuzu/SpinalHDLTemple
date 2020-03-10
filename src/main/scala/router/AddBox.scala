package router
import spinal.core._
import spinal.sim._
import spinal.core.sim._

import scala.util.Random

class AddBox()extends BlackBox{
  val io = new Bundle {
    val clk = in Bool
    val reset = in Bool
    val a = in Bool
    val c = out Bool
  }

  noIoPrefix()

  mapCurrentClockDomain(clock=io.clk,reset = io.reset)
}

class TopLevel extends Component{
  val io = new Bundle{
    val a = in Bool
    val c = out Bool
  }

  val add = new AddBox()
  io.a <> add.io.a 
  io.c <> add.io.c
}

object TopLevel {
  def main(args: Array[String]): Unit = {
    SpinalConfig(mode = Verilog, targetDirectory="Verilog").generate(new TopLevel)
  }
}

object TopLevelSim {
  def main(args: Array[String]) {
    
    SimConfig.addSimulatorFlag("E:/SpinalHDL/Temple/AddBox.sv").withWave.doSim(new TopLevel){dut =>
      //Fork a process to generate the reset and the clock on the dut
      dut.clockDomain.forkStimulus(period = 10)

      var d:Boolean = true
      var modelState = 0
      for(idx <- 0 to 99){
        //Drive the dut inputs with random values
        dut.io.a #= Random.nextBoolean()
        d = dut.io.a.toBoolean
        //Wait a rising edge on the clock
        dut.clockDomain.waitRisingEdge()
        //Check that the dut values match with the reference model ones 
        //if(c.toBoolean)
        //println("True")
        if(d)
        println("hahaha")
        else
        println("wwwwww")
      }
    }
  }
}