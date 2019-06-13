// Generator : SpinalHDL v1.3.3    git head : 8b8cd335eecbea3b5f1f970f218a982dbdb12d99
// Date      : 12/06/2019, 17:17:16
// Component : VGABoiler


`define clkArea_demo_enumDefinition_binary_sequential_type [3:0]
`define clkArea_demo_enumDefinition_binary_sequential_boot 4'b0000
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle 4'b0001
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_spielfeld 4'b0010
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_obereSeitenlinie 4'b0011
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_linkeSeitenlinie 4'b0100
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_untereSeitenlinie 4'b0101
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rechteSeitenlinie 4'b0110
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_mittelLinie 4'b0111
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_kreisMittellinie 4'b1000
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_wait2Redraw 4'b1001
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_ball 4'b1010
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_leftPadle 4'b1011
`define clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rightPadle 4'b1100

`define breshamSM_enumDefinition_binary_sequential_type [2:0]
`define breshamSM_enumDefinition_binary_sequential_boot 3'b000
`define breshamSM_enumDefinition_binary_sequential_breshamSM_idle 3'b001
`define breshamSM_enumDefinition_binary_sequential_breshamSM_calc 3'b010
`define breshamSM_enumDefinition_binary_sequential_breshamSM_calc2 3'b011
`define breshamSM_enumDefinition_binary_sequential_breshamSM_running 3'b100

`define BreshamCircSM_enumDefinition_binary_sequential_type [2:0]
`define BreshamCircSM_enumDefinition_binary_sequential_boot 3'b000
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle 3'b001
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1 3'b010
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel2 3'b011
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel3 3'b100
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel4 3'b101
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd 3'b110
`define BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd2 3'b111

`define fill_enumDefinition_binary_sequential_type [1:0]
`define fill_enumDefinition_binary_sequential_boot 2'b00
`define fill_enumDefinition_binary_sequential_fill_idle 2'b01
`define fill_enumDefinition_binary_sequential_fill_fill 2'b10

module VGAControl (
      output  io_vga_hSync,
      output  io_vga_vSync,
      output reg  io_vga_videoOn,
      output [9:0] io_vga_pixelX,
      output [9:0] io_vga_pixelY,
      input   toplevel_vgaClock_clk,
      input   toplevel_vgaClock_reset);
  reg [1:0] _zz_1_;
  wire  _zz_2_;
  reg  _zz_2__regNext;
  reg  vgaArea_hEnd;
  reg  vgaArea_vEnd;
  reg [9:0] vgaArea_hCounter;
  reg [9:0] vgaArea_vCounter;
  reg  vgaArea_vSync;
  reg  vgaArea_hSync;
  assign _zz_2_ = (_zz_1_ == (2'b11));
  assign io_vga_vSync = vgaArea_vSync;
  assign io_vga_hSync = vgaArea_hSync;
  assign io_vga_pixelY = vgaArea_vCounter;
  assign io_vga_pixelX = vgaArea_hCounter;
  always @ (*) begin
    if((vgaArea_hCounter == (10'b1100011111)))begin
      vgaArea_hEnd = 1'b1;
    end else begin
      vgaArea_hEnd = 1'b0;
    end
  end

  always @ (*) begin
    if((vgaArea_vCounter == (10'b1000001100)))begin
      vgaArea_vEnd = 1'b1;
    end else begin
      vgaArea_vEnd = 1'b0;
    end
  end

  always @ (*) begin
    if(((vgaArea_hCounter < (10'b1010000000)) && (vgaArea_vCounter < (10'b0111100000))))begin
      io_vga_videoOn = 1'b1;
    end else begin
      io_vga_videoOn = 1'b0;
    end
  end

  always @ (posedge toplevel_vgaClock_clk or posedge toplevel_vgaClock_reset) begin
    if (toplevel_vgaClock_reset) begin
      _zz_1_ <= (2'b00);
      _zz_2__regNext <= 1'b0;
    end else begin
      _zz_1_ <= (_zz_1_ + (2'b01));
      if(_zz_2_)begin
        _zz_1_ <= (2'b00);
      end
      _zz_2__regNext <= _zz_2_;
    end
  end

  always @ (posedge toplevel_vgaClock_clk or posedge toplevel_vgaClock_reset) begin
    if (toplevel_vgaClock_reset) begin
      vgaArea_hCounter <= (10'b0000000000);
      vgaArea_vCounter <= (10'b0000000000);
      vgaArea_vSync <= 1'b0;
      vgaArea_hSync <= 1'b0;
    end else begin
      if(_zz_2__regNext) begin
        if((((10'b1010010000) <= vgaArea_hCounter) && (vgaArea_hCounter <= (10'b1011101111))))begin
          vgaArea_hSync <= 1'b0;
        end else begin
          vgaArea_hSync <= 1'b1;
        end
        if((((10'b0111101010) <= vgaArea_vCounter) && (vgaArea_vCounter <= (10'b0111101011))))begin
          vgaArea_vSync <= 1'b0;
        end else begin
          vgaArea_vSync <= 1'b1;
        end
        if(vgaArea_hEnd)begin
          vgaArea_hCounter <= (10'b0000000000);
          if(vgaArea_vEnd)begin
            vgaArea_vCounter <= (10'b0000000000);
          end else begin
            vgaArea_vCounter <= (vgaArea_vCounter + (10'b0000000001));
          end
        end else begin
          vgaArea_hCounter <= (vgaArea_hCounter + (10'b0000000001));
        end
      end
    end
  end

endmodule

module Buffer_1_ (
      input   io_interface_rValid,
      output [0:0] io_interface_rData_0,
      output [0:0] io_interface_rData_1,
      output [0:0] io_interface_rData_2,
      input  [19:0] io_interface_rAddress,
      input   io_interface_wValid,
      input  [0:0] io_interface_wData_0,
      input  [0:0] io_interface_wData_1,
      input  [0:0] io_interface_wData_2,
      input  [19:0] io_interface_wAddress,
      input   toplevel_vgaClock_clk,
      input   toplevel_vgaClock_reset);
  reg [2:0] _zz_2_;
  wire [2:0] _zz_3_;
  wire [2:0] _zz_1_;
  reg [2:0] buffer_2_ [0:1048575];
  assign _zz_3_ = {io_interface_wData_2,{io_interface_wData_1,io_interface_wData_0}};
  always @ (posedge toplevel_vgaClock_clk) begin
    if(io_interface_wValid) begin
      buffer_2_[io_interface_wAddress] <= _zz_3_;
    end
  end

  always @ (posedge toplevel_vgaClock_clk) begin
    if(io_interface_rValid) begin
      _zz_2_ <= buffer_2_[io_interface_rAddress];
    end
  end

  assign _zz_1_ = _zz_2_;
  assign io_interface_rData_0 = _zz_1_[0 : 0];
  assign io_interface_rData_1 = _zz_1_[1 : 1];
  assign io_interface_rData_2 = _zz_1_[2 : 2];
endmodule

module BufferControl (
      output  io_vga_hSync,
      output  io_vga_vSync,
      output reg [0:0] io_vga_rgb_0,
      output reg [0:0] io_vga_rgb_1,
      output reg [0:0] io_vga_rgb_2,
      input   io_wValid,
      input  [0:0] io_wData_0,
      input  [0:0] io_wData_1,
      input  [0:0] io_wData_2,
      input  [18:0] io_wAddress,
      input   io_switch,
      input   toplevel_vgaClock_clk,
      input   toplevel_vgaClock_reset);
  wire [19:0] _zz_1_;
  wire [19:0] _zz_2_;
  wire  vga_io_vga_hSync;
  wire  vga_io_vga_vSync;
  wire  vga_io_vga_videoOn;
  wire [9:0] vga_io_vga_pixelX;
  wire [9:0] vga_io_vga_pixelY;
  wire [0:0] buffer_2__io_interface_rData_0;
  wire [0:0] buffer_2__io_interface_rData_1;
  wire [0:0] buffer_2__io_interface_rData_2;
  wire [19:0] _zz_3_;
  wire [18:0] _zz_4_;
  reg  hSyncDelay;
  reg  vSyncDelay;
  reg  switchBuffer;
  assign _zz_3_ = {vga_io_vga_pixelY,vga_io_vga_pixelX};
  assign _zz_4_ = _zz_3_[18:0];
  VGAControl vga ( 
    .io_vga_hSync(vga_io_vga_hSync),
    .io_vga_vSync(vga_io_vga_vSync),
    .io_vga_videoOn(vga_io_vga_videoOn),
    .io_vga_pixelX(vga_io_vga_pixelX),
    .io_vga_pixelY(vga_io_vga_pixelY),
    .toplevel_vgaClock_clk(toplevel_vgaClock_clk),
    .toplevel_vgaClock_reset(toplevel_vgaClock_reset) 
  );
  Buffer_1_ buffer_2_ ( 
    .io_interface_rValid(vga_io_vga_videoOn),
    .io_interface_rData_0(buffer_2__io_interface_rData_0),
    .io_interface_rData_1(buffer_2__io_interface_rData_1),
    .io_interface_rData_2(buffer_2__io_interface_rData_2),
    .io_interface_rAddress(_zz_1_),
    .io_interface_wValid(io_wValid),
    .io_interface_wData_0(io_wData_0),
    .io_interface_wData_1(io_wData_1),
    .io_interface_wData_2(io_wData_2),
    .io_interface_wAddress(_zz_2_),
    .toplevel_vgaClock_clk(toplevel_vgaClock_clk),
    .toplevel_vgaClock_reset(toplevel_vgaClock_reset) 
  );
  assign io_vga_vSync = vSyncDelay;
  assign io_vga_hSync = hSyncDelay;
  always @ (*) begin
    if(vga_io_vga_videoOn)begin
      io_vga_rgb_0 = buffer_2__io_interface_rData_0;
      io_vga_rgb_1 = buffer_2__io_interface_rData_1;
      io_vga_rgb_2 = buffer_2__io_interface_rData_2;
    end else begin
      io_vga_rgb_0 = (1'b0);
      io_vga_rgb_1 = (1'b0);
      io_vga_rgb_2 = (1'b0);
    end
  end

  assign _zz_1_ = {switchBuffer,_zz_4_};
  assign _zz_2_ = {(! switchBuffer),io_wAddress};
  always @ (posedge toplevel_vgaClock_clk or posedge toplevel_vgaClock_reset) begin
    if (toplevel_vgaClock_reset) begin
      hSyncDelay <= 1'b0;
      vSyncDelay <= 1'b0;
      switchBuffer <= 1'b0;
    end else begin
      if(io_switch)begin
        switchBuffer <= (! switchBuffer);
      end
      vSyncDelay <= vga_io_vga_vSync;
      hSyncDelay <= vga_io_vga_hSync;
    end
  end

endmodule

module BreshamLine (
      input  [10:0] io_coord1_0,
      input  [9:0] io_coord1_1,
      input  [10:0] io_coord2_0,
      input  [9:0] io_coord2_1,
      input   io_start,
      output reg  io_ready,
      output [9:0] io_address_0,
      output [8:0] io_address_1,
      output reg  io_setPixel,
      input   toplevel_vgaClock_clk,
      input   toplevel_vgaClock_reset);
  wire [10:0] _zz_1_;
  wire [10:0] _zz_2_;
  wire [9:0] _zz_3_;
  wire [9:0] _zz_4_;
  wire [10:0] _zz_5_;
  wire [9:0] _zz_6_;
  wire [10:0] _zz_7_;
  wire [10:0] _zz_8_;
  wire [20:0] _zz_9_;
  wire [19:0] _zz_10_;
  wire [19:0] _zz_11_;
  wire [19:0] _zz_12_;
  wire [19:0] _zz_13_;
  reg [10:0] dx;
  reg [9:0] dy;
  reg  down;
  reg  right;
  reg  downTemp;
  reg  rightTemp;
  reg [19:0] err;
  reg [19:0] e2;
  wire [19:0] errTemp;
  reg [9:0] x;
  reg [9:0] x2;
  reg [8:0] y;
  reg [8:0] y2;
  wire  breshamSM_wantExit;
  reg `breshamSM_enumDefinition_binary_sequential_type breshamSM_stateReg;
  reg `breshamSM_enumDefinition_binary_sequential_type breshamSM_stateNext;
  `ifndef SYNTHESIS
  reg [135:0] breshamSM_stateReg_string;
  reg [135:0] breshamSM_stateNext_string;
  `endif

  assign _zz_1_ = io_coord2_0;
  assign _zz_2_ = io_coord1_0;
  assign _zz_3_ = io_coord2_1;
  assign _zz_4_ = io_coord1_1;
  assign _zz_5_ = (11'b00000000000);
  assign _zz_6_ = (10'b0000000000);
  assign _zz_7_ = ($signed(dx) + $signed(_zz_8_));
  assign _zz_8_ = {{1{dy[9]}}, dy};
  assign _zz_9_ = ({1'd0,err} <<< 1);
  assign _zz_10_ = {{10{dy[9]}}, dy};
  assign _zz_11_ = {{10{dy[9]}}, dy};
  assign _zz_12_ = {{9{dx[10]}}, dx};
  assign _zz_13_ = {{9{dx[10]}}, dx};
  `ifndef SYNTHESIS
  always @(*) begin
    case(breshamSM_stateReg)
      `breshamSM_enumDefinition_binary_sequential_boot : breshamSM_stateReg_string = "boot             ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_idle : breshamSM_stateReg_string = "breshamSM_idle   ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_calc : breshamSM_stateReg_string = "breshamSM_calc   ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_calc2 : breshamSM_stateReg_string = "breshamSM_calc2  ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_running : breshamSM_stateReg_string = "breshamSM_running";
      default : breshamSM_stateReg_string = "?????????????????";
    endcase
  end
  always @(*) begin
    case(breshamSM_stateNext)
      `breshamSM_enumDefinition_binary_sequential_boot : breshamSM_stateNext_string = "boot             ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_idle : breshamSM_stateNext_string = "breshamSM_idle   ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_calc : breshamSM_stateNext_string = "breshamSM_calc   ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_calc2 : breshamSM_stateNext_string = "breshamSM_calc2  ";
      `breshamSM_enumDefinition_binary_sequential_breshamSM_running : breshamSM_stateNext_string = "breshamSM_running";
      default : breshamSM_stateNext_string = "?????????????????";
    endcase
  end
  `endif

  always @ (*) begin
    io_ready = 1'b1;
    downTemp = 1'b0;
    rightTemp = 1'b0;
    e2 = (20'b00000000000000000000);
    io_setPixel = 1'b0;
    breshamSM_stateNext = breshamSM_stateReg;
    case(breshamSM_stateReg)
      `breshamSM_enumDefinition_binary_sequential_breshamSM_idle : begin
        if(io_start)begin
          breshamSM_stateNext = `breshamSM_enumDefinition_binary_sequential_breshamSM_calc;
        end
      end
      `breshamSM_enumDefinition_binary_sequential_breshamSM_calc : begin
        io_ready = 1'b0;
        rightTemp = ($signed(_zz_5_) < $signed(dx));
        downTemp = ($signed(_zz_6_) < $signed(dy));
        breshamSM_stateNext = `breshamSM_enumDefinition_binary_sequential_breshamSM_calc2;
      end
      `breshamSM_enumDefinition_binary_sequential_breshamSM_calc2 : begin
        io_ready = 1'b0;
        breshamSM_stateNext = `breshamSM_enumDefinition_binary_sequential_breshamSM_running;
      end
      `breshamSM_enumDefinition_binary_sequential_breshamSM_running : begin
        io_setPixel = 1'b1;
        io_ready = 1'b0;
        if(((x == x2) && (y == y2)))begin
          breshamSM_stateNext = `breshamSM_enumDefinition_binary_sequential_breshamSM_idle;
        end
        e2 = _zz_9_[19:0];
      end
      default : begin
        breshamSM_stateNext = `breshamSM_enumDefinition_binary_sequential_breshamSM_idle;
      end
    endcase
  end

  assign io_address_0 = x;
  assign io_address_1 = y;
  assign errTemp = (20'b00000000000000000000);
  assign breshamSM_wantExit = 1'b0;
  always @ (posedge toplevel_vgaClock_clk or posedge toplevel_vgaClock_reset) begin
    if (toplevel_vgaClock_reset) begin
      dx <= (11'b00000000000);
      dy <= (10'b0000000000);
      down <= 1'b0;
      right <= 1'b0;
      err <= (20'b00000000000000000000);
      x <= (10'b0000000000);
      x2 <= (10'b0000000000);
      y <= (9'b000000000);
      y2 <= (9'b000000000);
      breshamSM_stateReg <= `breshamSM_enumDefinition_binary_sequential_boot;
    end else begin
      breshamSM_stateReg <= breshamSM_stateNext;
      case(breshamSM_stateReg)
        `breshamSM_enumDefinition_binary_sequential_breshamSM_idle : begin
          if(io_start)begin
            dx <= ($signed(_zz_1_) - $signed(_zz_2_));
            dy <= ($signed(_zz_3_) - $signed(_zz_4_));
            x <= io_coord1_0[9:0];
            y <= io_coord1_1[8:0];
            x2 <= io_coord2_0[9:0];
            y2 <= io_coord2_1[8:0];
          end
        end
        `breshamSM_enumDefinition_binary_sequential_breshamSM_calc : begin
          if((! rightTemp))begin
            dx <= (- dx);
          end
          if(downTemp)begin
            dy <= (- dy);
          end
          right <= rightTemp;
          down <= downTemp;
        end
        `breshamSM_enumDefinition_binary_sequential_breshamSM_calc2 : begin
          err <= {{9{_zz_7_[10]}}, _zz_7_};
        end
        `breshamSM_enumDefinition_binary_sequential_breshamSM_running : begin
          if(($signed(_zz_10_) <= $signed(e2)))begin
            err <= ($signed(err) + $signed(_zz_11_));
            if(right)begin
              x <= (x + (10'b0000000001));
            end else begin
              x <= (x - (10'b0000000001));
            end
          end else begin
            if(($signed(e2) <= $signed(_zz_12_)))begin
              err <= ($signed(err) + $signed(_zz_13_));
              if(down)begin
                y <= (y + (9'b000000001));
              end else begin
                y <= (y - (9'b000000001));
              end
            end
          end
        end
        default : begin
        end
      endcase
    end
  end

endmodule

module BreshamCircle (
      input  [10:0] io_coord_0,
      input  [9:0] io_coord_1,
      input  [10:0] io_r,
      input   io_start,
      output reg  io_ready,
      output reg  io_setPixel,
      output reg [9:0] io_address_0,
      output reg [8:0] io_address_1,
      input   toplevel_vgaClock_clk,
      input   toplevel_vgaClock_reset);
  wire [10:0] _zz_1_;
  wire [10:0] _zz_2_;
  wire [11:0] _zz_3_;
  wire [11:0] _zz_4_;
  wire [11:0] _zz_5_;
  wire [11:0] _zz_6_;
  wire [11:0] _zz_7_;
  wire [11:0] _zz_8_;
  wire [10:0] _zz_9_;
  wire [11:0] _zz_10_;
  wire [10:0] _zz_11_;
  wire [10:0] _zz_12_;
  wire [9:0] _zz_13_;
  wire [10:0] _zz_14_;
  wire [10:0] _zz_15_;
  wire [10:0] _zz_16_;
  wire [10:0] _zz_17_;
  wire [11:0] _zz_18_;
  wire [11:0] _zz_19_;
  wire [9:0] _zz_20_;
  wire [11:0] _zz_21_;
  wire [11:0] _zz_22_;
  wire [11:0] _zz_23_;
  wire [10:0] _zz_24_;
  wire [11:0] _zz_25_;
  wire [10:0] _zz_26_;
  wire [10:0] _zz_27_;
  wire [9:0] _zz_28_;
  wire [10:0] _zz_29_;
  wire [10:0] _zz_30_;
  wire [10:0] _zz_31_;
  wire [10:0] _zz_32_;
  wire [11:0] _zz_33_;
  wire [11:0] _zz_34_;
  wire [9:0] _zz_35_;
  wire [11:0] _zz_36_;
  wire [20:0] _zz_37_;
  wire [10:0] _zz_38_;
  wire [20:0] _zz_39_;
  wire [11:0] _zz_40_;
  wire [20:0] _zz_41_;
  wire [10:0] _zz_42_;
  wire [10:0] _zz_43_;
  wire [20:0] _zz_44_;
  wire [20:0] _zz_45_;
  wire [20:0] _zz_46_;
  wire [11:0] _zz_47_;
  wire [20:0] _zz_48_;
  wire [12:0] _zz_49_;
  wire [20:0] _zz_50_;
  wire [11:0] _zz_51_;
  wire [11:0] _zz_52_;
  wire [20:0] _zz_53_;
  wire [11:0] _zz_54_;
  reg [11:0] x;
  reg [10:0] y;
  reg [20:0] err;
  reg [20:0] rTemp;
  reg [10:0] x1;
  reg [9:0] y1;
  wire  BreshamCircSM_wantExit;
  reg `BreshamCircSM_enumDefinition_binary_sequential_type BreshamCircSM_stateReg;
  reg `BreshamCircSM_enumDefinition_binary_sequential_type BreshamCircSM_stateNext;
  `ifndef SYNTHESIS
  reg [183:0] BreshamCircSM_stateReg_string;
  reg [183:0] BreshamCircSM_stateNext_string;
  `endif

  assign _zz_1_ = (- _zz_2_);
  assign _zz_2_ = io_r;
  assign _zz_3_ = ($signed(_zz_4_) - $signed(_zz_5_));
  assign _zz_4_ = (12'b000000000010);
  assign _zz_5_ = _zz_6_;
  assign _zz_6_ = ({1'd0,io_r} <<< 1);
  assign _zz_7_ = _zz_8_;
  assign _zz_8_ = ($signed(_zz_10_) - $signed(x));
  assign _zz_9_ = x1;
  assign _zz_10_ = {{1{_zz_9_[10]}}, _zz_9_};
  assign _zz_11_ = _zz_12_;
  assign _zz_12_ = ($signed(_zz_14_) + $signed(y));
  assign _zz_13_ = y1;
  assign _zz_14_ = {{1{_zz_13_[9]}}, _zz_13_};
  assign _zz_15_ = _zz_16_;
  assign _zz_16_ = ($signed(_zz_17_) - $signed(y));
  assign _zz_17_ = x1;
  assign _zz_18_ = _zz_19_;
  assign _zz_19_ = ($signed(_zz_21_) - $signed(x));
  assign _zz_20_ = y1;
  assign _zz_21_ = {{2{_zz_20_[9]}}, _zz_20_};
  assign _zz_22_ = _zz_23_;
  assign _zz_23_ = ($signed(_zz_25_) + $signed(x));
  assign _zz_24_ = x1;
  assign _zz_25_ = {{1{_zz_24_[10]}}, _zz_24_};
  assign _zz_26_ = _zz_27_;
  assign _zz_27_ = ($signed(_zz_29_) - $signed(y));
  assign _zz_28_ = y1;
  assign _zz_29_ = {{1{_zz_28_[9]}}, _zz_28_};
  assign _zz_30_ = _zz_31_;
  assign _zz_31_ = ($signed(_zz_32_) + $signed(y));
  assign _zz_32_ = x1;
  assign _zz_33_ = _zz_34_;
  assign _zz_34_ = ($signed(_zz_36_) + $signed(x));
  assign _zz_35_ = y1;
  assign _zz_36_ = {{2{_zz_35_[9]}}, _zz_35_};
  assign _zz_37_ = {{10{y[10]}}, y};
  assign _zz_38_ = (11'b00000000001);
  assign _zz_39_ = ($signed(err) + $signed(_zz_41_));
  assign _zz_40_ = ({1'd0,_zz_42_} <<< 1);
  assign _zz_41_ = {{9{_zz_40_[11]}}, _zz_40_};
  assign _zz_42_ = ($signed(_zz_43_) + $signed(y));
  assign _zz_43_ = (11'b00000000001);
  assign _zz_44_ = (21'b000000000000000000001);
  assign _zz_45_ = {{9{x[11]}}, x};
  assign _zz_46_ = {{10{y[10]}}, y};
  assign _zz_47_ = (12'b000000000001);
  assign _zz_48_ = ($signed(err) + $signed(_zz_50_));
  assign _zz_49_ = ({1'd0,_zz_51_} <<< 1);
  assign _zz_50_ = {{8{_zz_49_[12]}}, _zz_49_};
  assign _zz_51_ = ($signed(_zz_52_) + $signed(x));
  assign _zz_52_ = (12'b000000000001);
  assign _zz_53_ = (21'b000000000000000000001);
  assign _zz_54_ = (12'b000000000000);
  `ifndef SYNTHESIS
  always @(*) begin
    case(BreshamCircSM_stateReg)
      `BreshamCircSM_enumDefinition_binary_sequential_boot : BreshamCircSM_stateReg_string = "boot                   ";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle : BreshamCircSM_stateReg_string = "BreshamCircSM_idle     ";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1 : BreshamCircSM_stateReg_string = "BreshamCircSM_setPixel1";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel2 : BreshamCircSM_stateReg_string = "BreshamCircSM_setPixel2";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel3 : BreshamCircSM_stateReg_string = "BreshamCircSM_setPixel3";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel4 : BreshamCircSM_stateReg_string = "BreshamCircSM_setPixel4";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd : BreshamCircSM_stateReg_string = "BreshamCircSM_calcEnd  ";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd2 : BreshamCircSM_stateReg_string = "BreshamCircSM_calcEnd2 ";
      default : BreshamCircSM_stateReg_string = "???????????????????????";
    endcase
  end
  always @(*) begin
    case(BreshamCircSM_stateNext)
      `BreshamCircSM_enumDefinition_binary_sequential_boot : BreshamCircSM_stateNext_string = "boot                   ";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle : BreshamCircSM_stateNext_string = "BreshamCircSM_idle     ";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1 : BreshamCircSM_stateNext_string = "BreshamCircSM_setPixel1";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel2 : BreshamCircSM_stateNext_string = "BreshamCircSM_setPixel2";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel3 : BreshamCircSM_stateNext_string = "BreshamCircSM_setPixel3";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel4 : BreshamCircSM_stateNext_string = "BreshamCircSM_setPixel4";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd : BreshamCircSM_stateNext_string = "BreshamCircSM_calcEnd  ";
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd2 : BreshamCircSM_stateNext_string = "BreshamCircSM_calcEnd2 ";
      default : BreshamCircSM_stateNext_string = "???????????????????????";
    endcase
  end
  `endif

  always @ (*) begin
    io_address_0 = (10'b0000000000);
    io_address_1 = (9'b000000000);
    io_ready = 1'b1;
    io_setPixel = 1'b0;
    BreshamCircSM_stateNext = BreshamCircSM_stateReg;
    case(BreshamCircSM_stateReg)
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle : begin
        if(io_start)begin
          BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1;
        end
      end
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1 : begin
        io_ready = 1'b0;
        io_setPixel = 1'b1;
        io_address_0 = _zz_7_[9:0];
        io_address_1 = _zz_11_[8:0];
        BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel2;
      end
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel2 : begin
        io_ready = 1'b0;
        io_setPixel = 1'b1;
        io_address_0 = _zz_15_[9:0];
        io_address_1 = _zz_18_[8:0];
        BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel3;
      end
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel3 : begin
        io_ready = 1'b0;
        io_setPixel = 1'b1;
        io_address_0 = _zz_22_[9:0];
        io_address_1 = _zz_26_[8:0];
        BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel4;
      end
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel4 : begin
        io_ready = 1'b0;
        io_setPixel = 1'b1;
        io_address_0 = _zz_30_[9:0];
        io_address_1 = _zz_33_[8:0];
        BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd;
      end
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd : begin
        io_ready = 1'b0;
        BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd2;
      end
      `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd2 : begin
        io_ready = 1'b0;
        if(($signed(_zz_54_) <= $signed(x)))begin
          BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle;
        end else begin
          BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1;
        end
      end
      default : begin
        BreshamCircSM_stateNext = `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle;
      end
    endcase
  end

  assign BreshamCircSM_wantExit = 1'b0;
  always @ (posedge toplevel_vgaClock_clk or posedge toplevel_vgaClock_reset) begin
    if (toplevel_vgaClock_reset) begin
      x <= (12'b000000000000);
      y <= (11'b00000000000);
      err <= (21'b000000000000000000000);
      rTemp <= (21'b000000000000000000000);
      x1 <= (11'b00000000000);
      y1 <= (10'b0000000000);
      BreshamCircSM_stateReg <= `BreshamCircSM_enumDefinition_binary_sequential_boot;
    end else begin
      BreshamCircSM_stateReg <= BreshamCircSM_stateNext;
      case(BreshamCircSM_stateReg)
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_idle : begin
          if(io_start)begin
            x1 <= io_coord_0;
            y1 <= io_coord_1;
            x <= {{1{_zz_1_[10]}}, _zz_1_};
            y <= (11'b00000000000);
            err <= {{9{_zz_3_[11]}}, _zz_3_};
          end
        end
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel1 : begin
        end
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel2 : begin
        end
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel3 : begin
        end
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_setPixel4 : begin
        end
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd : begin
          rTemp <= err;
          if(($signed(err) <= $signed(_zz_37_)))begin
            y <= ($signed(y) + $signed(_zz_38_));
            err <= ($signed(_zz_39_) + $signed(_zz_44_));
          end
        end
        `BreshamCircSM_enumDefinition_binary_sequential_BreshamCircSM_calcEnd2 : begin
          if((($signed(_zz_45_) < $signed(rTemp)) || ($signed(_zz_46_) < $signed(err))))begin
            x <= ($signed(x) + $signed(_zz_47_));
            err <= ($signed(_zz_48_) + $signed(_zz_53_));
          end
        end
        default : begin
        end
      endcase
    end
  end

endmodule

module FillRetancle (
      input  [9:0] io_coord1_0,
      input  [8:0] io_coord1_1,
      input  [9:0] io_coord2_0,
      input  [8:0] io_coord2_1,
      input   io_start,
      output reg  io_ready,
      output [18:0] io_address,
      output reg  io_setPixel,
      input   toplevel_vgaClock_clk,
      input   toplevel_vgaClock_reset);
  wire  _zz_1_;
  wire [8:0] _zz_2_;
  wire [9:0] _zz_3_;
  wire [9:0] _zz_4_;
  reg [9:0] counterX;
  reg [8:0] counterY;
  reg [9:0] x1;
  reg [9:0] x2;
  reg [8:0] y2;
  wire  fill_wantExit;
  reg `fill_enumDefinition_binary_sequential_type fill_stateReg;
  reg `fill_enumDefinition_binary_sequential_type fill_stateNext;
  `ifndef SYNTHESIS
  reg [71:0] fill_stateReg_string;
  reg [71:0] fill_stateNext_string;
  `endif

  assign _zz_1_ = ((_zz_2_ == counterY) && (_zz_3_ == counterX));
  assign _zz_2_ = (y2 - (9'b000000001));
  assign _zz_3_ = (x2 - (10'b0000000001));
  assign _zz_4_ = (x2 - (10'b0000000001));
  `ifndef SYNTHESIS
  always @(*) begin
    case(fill_stateReg)
      `fill_enumDefinition_binary_sequential_boot : fill_stateReg_string = "boot     ";
      `fill_enumDefinition_binary_sequential_fill_idle : fill_stateReg_string = "fill_idle";
      `fill_enumDefinition_binary_sequential_fill_fill : fill_stateReg_string = "fill_fill";
      default : fill_stateReg_string = "?????????";
    endcase
  end
  always @(*) begin
    case(fill_stateNext)
      `fill_enumDefinition_binary_sequential_boot : fill_stateNext_string = "boot     ";
      `fill_enumDefinition_binary_sequential_fill_idle : fill_stateNext_string = "fill_idle";
      `fill_enumDefinition_binary_sequential_fill_fill : fill_stateNext_string = "fill_fill";
      default : fill_stateNext_string = "?????????";
    endcase
  end
  `endif

  assign io_address = {counterY,counterX};
  always @ (*) begin
    io_setPixel = 1'b0;
    io_ready = 1'b1;
    fill_stateNext = fill_stateReg;
    case(fill_stateReg)
      `fill_enumDefinition_binary_sequential_fill_idle : begin
        if(io_start)begin
          fill_stateNext = `fill_enumDefinition_binary_sequential_fill_fill;
        end
      end
      `fill_enumDefinition_binary_sequential_fill_fill : begin
        io_ready = 1'b0;
        io_setPixel = 1'b1;
        if(_zz_1_)begin
          fill_stateNext = `fill_enumDefinition_binary_sequential_fill_idle;
        end
      end
      default : begin
        fill_stateNext = `fill_enumDefinition_binary_sequential_fill_idle;
      end
    endcase
  end

  assign fill_wantExit = 1'b0;
  always @ (posedge toplevel_vgaClock_clk or posedge toplevel_vgaClock_reset) begin
    if (toplevel_vgaClock_reset) begin
      fill_stateReg <= `fill_enumDefinition_binary_sequential_boot;
    end else begin
      fill_stateReg <= fill_stateNext;
    end
  end

  always @ (posedge toplevel_vgaClock_clk) begin
    case(fill_stateReg)
      `fill_enumDefinition_binary_sequential_fill_idle : begin
        if(io_start)begin
          counterX <= io_coord1_0;
          counterY <= io_coord1_1;
          x1 <= io_coord1_0;
          x2 <= io_coord2_0;
          y2 <= io_coord2_1;
        end
      end
      `fill_enumDefinition_binary_sequential_fill_fill : begin
        if(! _zz_1_) begin
          if((_zz_4_ == counterX))begin
            counterY <= (counterY + (9'b000000001));
            counterX <= x1;
          end else begin
            counterX <= (counterX + (10'b0000000001));
          end
        end
      end
      default : begin
      end
    endcase
  end

endmodule

module VGABoiler (
      output  io_hSync,
      output  io_vSync,
      output [2:0] io_rgb,
      input   io_clk,
      input   io_reset);
  reg  _zz_1_;
  reg [0:0] _zz_2_;
  reg [0:0] _zz_3_;
  reg [0:0] _zz_4_;
  reg [18:0] _zz_5_;
  reg  _zz_6_;
  reg [10:0] _zz_7_;
  reg [9:0] _zz_8_;
  reg [10:0] _zz_9_;
  reg [9:0] _zz_10_;
  reg  _zz_11_;
  reg [10:0] _zz_12_;
  reg [9:0] _zz_13_;
  reg [10:0] _zz_14_;
  reg  _zz_15_;
  reg [9:0] _zz_16_;
  reg [8:0] _zz_17_;
  reg [9:0] _zz_18_;
  reg [8:0] _zz_19_;
  reg  _zz_20_;
  wire  clkArea_vga_io_vga_hSync;
  wire  clkArea_vga_io_vga_vSync;
  wire [0:0] clkArea_vga_io_vga_rgb_0;
  wire [0:0] clkArea_vga_io_vga_rgb_1;
  wire [0:0] clkArea_vga_io_vga_rgb_2;
  wire  clkArea_bresham_io_ready;
  wire [9:0] clkArea_bresham_io_address_0;
  wire [8:0] clkArea_bresham_io_address_1;
  wire  clkArea_bresham_io_setPixel;
  wire  clkArea_breshamCircle_io_ready;
  wire  clkArea_breshamCircle_io_setPixel;
  wire [9:0] clkArea_breshamCircle_io_address_0;
  wire [8:0] clkArea_breshamCircle_io_address_1;
  wire  clkArea_fill_io_ready;
  wire [18:0] clkArea_fill_io_address;
  wire  clkArea_fill_io_setPixel;
  wire  _zz_21_;
  wire [8:0] _zz_22_;
  wire [9:0] _zz_23_;
  wire [8:0] _zz_24_;
  wire [9:0] _zz_25_;
  wire [8:0] _zz_26_;
  wire [9:0] _zz_27_;
  wire [8:0] _zz_28_;
  wire [9:0] _zz_29_;
  wire [8:0] _zz_30_;
  wire [9:0] _zz_31_;
  wire [8:0] _zz_32_;
  wire [9:0] _zz_33_;
  wire [9:0] _zz_34_;
  wire [9:0] _zz_35_;
  wire [9:0] _zz_36_;
  wire [8:0] _zz_37_;
  wire [8:0] _zz_38_;
  wire [8:0] _zz_39_;
  wire [9:0] _zz_40_;
  wire [9:0] _zz_41_;
  wire [2:0] _zz_42_;
  wire [9:0] _zz_43_;
  wire [8:0] _zz_44_;
  wire [8:0] _zz_45_;
  wire [2:0] _zz_46_;
  wire [8:0] _zz_47_;
  wire [8:0] _zz_48_;
  wire [9:0] _zz_49_;
  wire  vgaClock_clk;
  wire  vgaClock_reset;
  wire [26:0] clkArea_counter;
  reg [9:0] clkArea_ballx;
  reg [8:0] clkArea_bally;
  reg [2:0] clkArea_x;
  reg [2:0] clkArea_y;
  wire  clkArea_demo_wantExit;
  reg `clkArea_demo_enumDefinition_binary_sequential_type clkArea_demo_stateReg;
  reg `clkArea_demo_enumDefinition_binary_sequential_type clkArea_demo_stateNext;
  `ifndef SYNTHESIS
  reg [239:0] clkArea_demo_stateReg_string;
  reg [239:0] clkArea_demo_stateNext_string;
  `endif

  assign _zz_21_ = (! clkArea_vga_io_vga_vSync);
  assign _zz_22_ = clkArea_bresham_io_address_1;
  assign _zz_23_ = clkArea_bresham_io_address_0;
  assign _zz_24_ = clkArea_bresham_io_address_1;
  assign _zz_25_ = clkArea_bresham_io_address_0;
  assign _zz_26_ = clkArea_bresham_io_address_1;
  assign _zz_27_ = clkArea_bresham_io_address_0;
  assign _zz_28_ = clkArea_bresham_io_address_1;
  assign _zz_29_ = clkArea_bresham_io_address_0;
  assign _zz_30_ = clkArea_bresham_io_address_1;
  assign _zz_31_ = clkArea_bresham_io_address_0;
  assign _zz_32_ = clkArea_breshamCircle_io_address_1;
  assign _zz_33_ = clkArea_breshamCircle_io_address_0;
  assign _zz_34_ = ($signed(_zz_35_) + $signed(_zz_36_));
  assign _zz_35_ = clkArea_ballx;
  assign _zz_36_ = {{7{clkArea_x[2]}}, clkArea_x};
  assign _zz_37_ = ($signed(_zz_38_) + $signed(_zz_39_));
  assign _zz_38_ = clkArea_bally;
  assign _zz_39_ = {{6{clkArea_y[2]}}, clkArea_y};
  assign _zz_40_ = ($signed(_zz_41_) + $signed(_zz_43_));
  assign _zz_41_ = clkArea_ballx;
  assign _zz_42_ = (- clkArea_x);
  assign _zz_43_ = {{7{_zz_42_[2]}}, _zz_42_};
  assign _zz_44_ = ($signed(_zz_45_) + $signed(_zz_47_));
  assign _zz_45_ = clkArea_bally;
  assign _zz_46_ = (- clkArea_y);
  assign _zz_47_ = {{6{_zz_46_[2]}}, _zz_46_};
  assign _zz_48_ = clkArea_breshamCircle_io_address_1;
  assign _zz_49_ = clkArea_breshamCircle_io_address_0;
  BufferControl clkArea_vga ( 
    .io_vga_hSync(clkArea_vga_io_vga_hSync),
    .io_vga_vSync(clkArea_vga_io_vga_vSync),
    .io_vga_rgb_0(clkArea_vga_io_vga_rgb_0),
    .io_vga_rgb_1(clkArea_vga_io_vga_rgb_1),
    .io_vga_rgb_2(clkArea_vga_io_vga_rgb_2),
    .io_wValid(_zz_1_),
    .io_wData_0(_zz_2_),
    .io_wData_1(_zz_3_),
    .io_wData_2(_zz_4_),
    .io_wAddress(_zz_5_),
    .io_switch(_zz_6_),
    .toplevel_vgaClock_clk(vgaClock_clk),
    .toplevel_vgaClock_reset(vgaClock_reset) 
  );
  BreshamLine clkArea_bresham ( 
    .io_coord1_0(_zz_7_),
    .io_coord1_1(_zz_8_),
    .io_coord2_0(_zz_9_),
    .io_coord2_1(_zz_10_),
    .io_start(_zz_11_),
    .io_ready(clkArea_bresham_io_ready),
    .io_address_0(clkArea_bresham_io_address_0),
    .io_address_1(clkArea_bresham_io_address_1),
    .io_setPixel(clkArea_bresham_io_setPixel),
    .toplevel_vgaClock_clk(vgaClock_clk),
    .toplevel_vgaClock_reset(vgaClock_reset) 
  );
  BreshamCircle clkArea_breshamCircle ( 
    .io_coord_0(_zz_12_),
    .io_coord_1(_zz_13_),
    .io_r(_zz_14_),
    .io_start(_zz_15_),
    .io_ready(clkArea_breshamCircle_io_ready),
    .io_setPixel(clkArea_breshamCircle_io_setPixel),
    .io_address_0(clkArea_breshamCircle_io_address_0),
    .io_address_1(clkArea_breshamCircle_io_address_1),
    .toplevel_vgaClock_clk(vgaClock_clk),
    .toplevel_vgaClock_reset(vgaClock_reset) 
  );
  FillRetancle clkArea_fill ( 
    .io_coord1_0(_zz_16_),
    .io_coord1_1(_zz_17_),
    .io_coord2_0(_zz_18_),
    .io_coord2_1(_zz_19_),
    .io_start(_zz_20_),
    .io_ready(clkArea_fill_io_ready),
    .io_address(clkArea_fill_io_address),
    .io_setPixel(clkArea_fill_io_setPixel),
    .toplevel_vgaClock_clk(vgaClock_clk),
    .toplevel_vgaClock_reset(vgaClock_reset) 
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(clkArea_demo_stateReg)
      `clkArea_demo_enumDefinition_binary_sequential_boot : clkArea_demo_stateReg_string = "boot                          ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle : clkArea_demo_stateReg_string = "clkArea_demo_idle             ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_spielfeld : clkArea_demo_stateReg_string = "clkArea_demo_spielfeld        ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_obereSeitenlinie : clkArea_demo_stateReg_string = "clkArea_demo_obereSeitenlinie ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_linkeSeitenlinie : clkArea_demo_stateReg_string = "clkArea_demo_linkeSeitenlinie ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_untereSeitenlinie : clkArea_demo_stateReg_string = "clkArea_demo_untereSeitenlinie";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rechteSeitenlinie : clkArea_demo_stateReg_string = "clkArea_demo_rechteSeitenlinie";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_mittelLinie : clkArea_demo_stateReg_string = "clkArea_demo_mittelLinie      ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_kreisMittellinie : clkArea_demo_stateReg_string = "clkArea_demo_kreisMittellinie ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_wait2Redraw : clkArea_demo_stateReg_string = "clkArea_demo_wait2Redraw      ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_ball : clkArea_demo_stateReg_string = "clkArea_demo_ball             ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_leftPadle : clkArea_demo_stateReg_string = "clkArea_demo_leftPadle        ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rightPadle : clkArea_demo_stateReg_string = "clkArea_demo_rightPadle       ";
      default : clkArea_demo_stateReg_string = "??????????????????????????????";
    endcase
  end
  always @(*) begin
    case(clkArea_demo_stateNext)
      `clkArea_demo_enumDefinition_binary_sequential_boot : clkArea_demo_stateNext_string = "boot                          ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle : clkArea_demo_stateNext_string = "clkArea_demo_idle             ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_spielfeld : clkArea_demo_stateNext_string = "clkArea_demo_spielfeld        ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_obereSeitenlinie : clkArea_demo_stateNext_string = "clkArea_demo_obereSeitenlinie ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_linkeSeitenlinie : clkArea_demo_stateNext_string = "clkArea_demo_linkeSeitenlinie ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_untereSeitenlinie : clkArea_demo_stateNext_string = "clkArea_demo_untereSeitenlinie";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rechteSeitenlinie : clkArea_demo_stateNext_string = "clkArea_demo_rechteSeitenlinie";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_mittelLinie : clkArea_demo_stateNext_string = "clkArea_demo_mittelLinie      ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_kreisMittellinie : clkArea_demo_stateNext_string = "clkArea_demo_kreisMittellinie ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_wait2Redraw : clkArea_demo_stateNext_string = "clkArea_demo_wait2Redraw      ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_ball : clkArea_demo_stateNext_string = "clkArea_demo_ball             ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_leftPadle : clkArea_demo_stateNext_string = "clkArea_demo_leftPadle        ";
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rightPadle : clkArea_demo_stateNext_string = "clkArea_demo_rightPadle       ";
      default : clkArea_demo_stateNext_string = "??????????????????????????????";
    endcase
  end
  `endif

  assign vgaClock_clk = io_clk;
  assign vgaClock_reset = io_reset;
  assign clkArea_counter = (27'b000000000000000000000000000);
  assign io_hSync = clkArea_vga_io_vga_hSync;
  assign io_vSync = clkArea_vga_io_vga_vSync;
  always @ (*) begin
    _zz_20_ = 1'b0;
    _zz_16_ = (10'b0000000000);
    _zz_17_ = (9'b000000000);
    _zz_18_ = (10'b0000000000);
    _zz_19_ = (9'b000000000);
    _zz_7_ = (11'b00000000000);
    _zz_8_ = (10'b0000000000);
    _zz_9_ = (11'b00000000000);
    _zz_10_ = (10'b0000000000);
    _zz_11_ = 1'b0;
    _zz_12_ = (11'b00000000000);
    _zz_13_ = (10'b0000000000);
    _zz_14_ = (11'b00000000000);
    _zz_15_ = 1'b0;
    _zz_1_ = 1'b0;
    _zz_5_ = (19'b0000000000000000000);
    _zz_2_ = (1'b0);
    _zz_3_ = (1'b0);
    _zz_4_ = (1'b0);
    _zz_6_ = 1'b0;
    clkArea_demo_stateNext = clkArea_demo_stateReg;
    case(clkArea_demo_stateReg)
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle : begin
        _zz_16_ = (10'b0000000000);
        _zz_17_ = (9'b000000000);
        _zz_18_ = (10'b1010000000);
        _zz_19_ = (9'b111100000);
        _zz_20_ = 1'b1;
        clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_spielfeld;
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_spielfeld : begin
        _zz_1_ = clkArea_fill_io_setPixel;
        _zz_5_ = clkArea_fill_io_address;
        _zz_2_ = (1'b0);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b0);
        if(clkArea_fill_io_ready)begin
          _zz_7_ = (11'b00000001010);
          _zz_8_ = (10'b0000001010);
          _zz_9_ = (11'b01001110110);
          _zz_10_ = (10'b0000001010);
          _zz_11_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_obereSeitenlinie;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_obereSeitenlinie : begin
        _zz_1_ = clkArea_bresham_io_setPixel;
        _zz_5_ = {_zz_22_,_zz_23_};
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b1);
        if(clkArea_bresham_io_ready)begin
          _zz_7_ = (11'b00000001010);
          _zz_8_ = (10'b0000001010);
          _zz_9_ = (11'b00000001010);
          _zz_10_ = (10'b0111010110);
          _zz_11_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_linkeSeitenlinie;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_linkeSeitenlinie : begin
        _zz_1_ = clkArea_bresham_io_setPixel;
        _zz_5_ = {_zz_24_,_zz_25_};
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b1);
        if(clkArea_bresham_io_ready)begin
          _zz_7_ = (11'b00000001010);
          _zz_8_ = (10'b0111010110);
          _zz_9_ = (11'b01001110110);
          _zz_10_ = (10'b0111010110);
          _zz_11_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_untereSeitenlinie;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_untereSeitenlinie : begin
        _zz_1_ = clkArea_bresham_io_setPixel;
        _zz_5_ = {_zz_26_,_zz_27_};
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b1);
        if(clkArea_bresham_io_ready)begin
          _zz_7_ = (11'b01001110110);
          _zz_8_ = (10'b0000001010);
          _zz_9_ = (11'b01001110110);
          _zz_10_ = (10'b0111010110);
          _zz_11_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rechteSeitenlinie;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rechteSeitenlinie : begin
        _zz_1_ = clkArea_bresham_io_setPixel;
        _zz_5_ = {_zz_28_,_zz_29_};
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b1);
        if(clkArea_bresham_io_ready)begin
          _zz_7_ = (11'b00100110110);
          _zz_8_ = (10'b0000001010);
          _zz_9_ = (11'b00100110110);
          _zz_10_ = (10'b0111010110);
          _zz_11_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_mittelLinie;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_mittelLinie : begin
        _zz_1_ = clkArea_bresham_io_setPixel;
        _zz_5_ = {_zz_30_,_zz_31_};
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b1);
        if(clkArea_bresham_io_ready)begin
          _zz_12_ = (11'b00100110110);
          _zz_13_ = (10'b0011100110);
          _zz_14_ = (11'b00000001010);
          _zz_15_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_kreisMittellinie;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_kreisMittellinie : begin
        _zz_1_ = clkArea_breshamCircle_io_setPixel;
        _zz_5_ = {_zz_32_,_zz_33_};
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b1);
        _zz_4_ = (1'b1);
        if(clkArea_breshamCircle_io_ready)begin
          _zz_12_ = {1'd0, clkArea_ballx};
          _zz_13_ = {1'd0, clkArea_bally};
          _zz_14_ = (11'b00000000010);
          _zz_15_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_ball;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_wait2Redraw : begin
        if(_zz_21_)begin
          _zz_6_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_ball : begin
        _zz_1_ = clkArea_breshamCircle_io_setPixel;
        _zz_5_ = {_zz_48_,_zz_49_};
        _zz_2_ = (1'b0);
        _zz_3_ = (1'b0);
        _zz_4_ = (1'b0);
        if(clkArea_breshamCircle_io_ready)begin
          _zz_16_ = (10'b0000001111);
          _zz_17_ = (clkArea_bally - (9'b000001010));
          _zz_18_ = (10'b0000010010);
          _zz_19_ = (clkArea_bally + (9'b000001010));
          _zz_20_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_leftPadle;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_leftPadle : begin
        _zz_1_ = clkArea_fill_io_setPixel;
        _zz_5_ = clkArea_fill_io_address;
        _zz_2_ = (1'b1);
        _zz_3_ = (1'b0);
        _zz_4_ = (1'b0);
        if(clkArea_fill_io_ready)begin
          _zz_16_ = (10'b1001101110);
          _zz_17_ = (clkArea_bally - (9'b000001010));
          _zz_18_ = (10'b1001110001);
          _zz_19_ = (clkArea_bally + (9'b000001010));
          _zz_20_ = 1'b1;
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rightPadle;
        end
      end
      `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rightPadle : begin
        _zz_1_ = clkArea_fill_io_setPixel;
        _zz_5_ = clkArea_fill_io_address;
        _zz_2_ = (1'b0);
        _zz_3_ = (1'b0);
        _zz_4_ = (1'b1);
        if(clkArea_fill_io_ready)begin
          clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_wait2Redraw;
        end
      end
      default : begin
        clkArea_demo_stateNext = `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle;
      end
    endcase
  end

  assign clkArea_demo_wantExit = 1'b0;
  assign io_rgb = {{clkArea_vga_io_vga_rgb_2,clkArea_vga_io_vga_rgb_1},clkArea_vga_io_vga_rgb_0};
  always @ (posedge vgaClock_clk or posedge vgaClock_reset) begin
    if (vgaClock_reset) begin
      clkArea_ballx <= (10'b0000111100);
      clkArea_bally <= (9'b011110000);
      clkArea_x <= (3'b010);
      clkArea_y <= (3'b001);
      clkArea_demo_stateReg <= `clkArea_demo_enumDefinition_binary_sequential_boot;
    end else begin
      clkArea_demo_stateReg <= clkArea_demo_stateNext;
      case(clkArea_demo_stateReg)
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_idle : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_spielfeld : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_obereSeitenlinie : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_linkeSeitenlinie : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_untereSeitenlinie : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rechteSeitenlinie : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_mittelLinie : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_kreisMittellinie : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_wait2Redraw : begin
          if(_zz_21_)begin
            clkArea_ballx <= _zz_34_;
            clkArea_bally <= _zz_37_;
            if(((clkArea_ballx == (10'b1001101110)) || (clkArea_ballx == (10'b0000010010))))begin
              clkArea_x <= (- clkArea_x);
              clkArea_ballx <= _zz_40_;
            end
            if(((clkArea_bally == (9'b111010110)) || (clkArea_bally == (9'b000001010))))begin
              clkArea_y <= (- clkArea_y);
              clkArea_bally <= _zz_44_;
            end
          end
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_ball : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_leftPadle : begin
        end
        `clkArea_demo_enumDefinition_binary_sequential_clkArea_demo_rightPadle : begin
        end
        default : begin
        end
      endcase
    end
  end

endmodule

