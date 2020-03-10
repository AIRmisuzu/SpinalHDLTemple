// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 10/03/2020, 11:17:59
// Component : Dut


module Dut (
      input  [7:0] io_a,
      input  [7:0] io_b,
      input  [7:0] io_c,
      output [7:0] io_result,
      input   clk,
      input   reset);
  wire [7:0] _zz_2_;
  reg [7:0] _zz_1_;
  assign _zz_2_ = (io_a + io_b);
  assign io_result = _zz_1_;
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      _zz_1_ <= (8'b00000000);
    end else begin
      _zz_1_ <= (_zz_2_ - io_c);
    end
  end

endmodule

