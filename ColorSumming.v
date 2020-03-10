// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 10/03/2020, 11:17:34
// Component : ColorSumming


module ColorSumming (
      input  [7:0] io_sources_0_r,
      input  [7:0] io_sources_0_g,
      input  [7:0] io_sources_0_b,
      input  [7:0] io_sources_1_r,
      input  [7:0] io_sources_1_g,
      input  [7:0] io_sources_1_b,
      output [7:0] io_result_r,
      output [7:0] io_result_g,
      output [7:0] io_result_b);
  reg [7:0] sum_r;
  reg [7:0] sum_g;
  reg [7:0] sum_b;
  reg [7:0] _zz_1_;
  reg [7:0] _zz_2_;
  reg [7:0] _zz_3_;
  always @ (*) begin
    sum_r = _zz_1_;
    sum_r = (_zz_1_ + io_sources_1_r);
  end

  always @ (*) begin
    sum_g = _zz_2_;
    sum_g = (_zz_2_ + io_sources_1_g);
  end

  always @ (*) begin
    sum_b = _zz_3_;
    sum_b = (_zz_3_ + io_sources_1_b);
  end

  always @ (*) begin
    _zz_1_ = (8'b00000000);
    _zz_1_ = ((8'b00000000) + io_sources_0_r);
  end

  always @ (*) begin
    _zz_2_ = (8'b00000000);
    _zz_2_ = ((8'b00000000) + io_sources_0_g);
  end

  always @ (*) begin
    _zz_3_ = (8'b00000000);
    _zz_3_ = ((8'b00000000) + io_sources_0_b);
  end

  assign io_result_r = sum_r;
  assign io_result_g = sum_g;
  assign io_result_b = sum_b;
endmodule

