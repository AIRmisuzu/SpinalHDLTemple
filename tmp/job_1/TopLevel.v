// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 10/03/2020, 11:42:12
// Component : TopLevel


module TopLevel (
      input   io_a,
      output  io_c,
      input   reset,
      input   clk);
  wire  add_c;
  AddBox add ( 
    .clk(clk),
    .reset(reset),
    .a(io_a),
    .c(add_c) 
  );
  assign io_c = add_c;
endmodule

