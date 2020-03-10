// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 10/03/2020, 11:27:58
// Component : Add


module AddBox (
      input   a,
      output reg  c,
      input   clk,
      input   reset);
  always @ (posedge clk) begin
    c <= a;
  end

endmodule

