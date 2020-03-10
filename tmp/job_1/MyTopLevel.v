// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 10/03/2020, 11:23:25
// Component : MyTopLevel


module MyTopLevel (
      input   io_cond0,
      input   io_cond1,
      output  io_flag,
      output [7:0] io_state,
      input   clk,
      input   reset);
  reg [7:0] counter;
  assign io_state = counter;
  assign io_flag = ((counter == (8'b00000000)) || io_cond1);
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      counter <= (8'b00000000);
    end else begin
      if(io_cond0)begin
        counter <= (counter + (8'b00000001));
      end
    end
  end

endmodule

