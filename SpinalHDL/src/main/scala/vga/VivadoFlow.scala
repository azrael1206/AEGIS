package vga

import java.io.File
import java.nio.file.Paths

import org.apache.commons.io.FileUtils
import spinal.core._
import spinal.lib.eda.bench.Report

import scala.sys.process._

object VivadoFlow {
  def doCmd(cmd : String): Unit ={
    println(cmd)
    if(isWindows)
      Process("cmd /C " + cmd) !
    else
      Process(cmd) !
  }
  def doCmd(cmd : String, path : String): Unit ={
    println(cmd)
    if(isWindows)
      Process("cmd /C " + cmd, new java.io.File(path)) !
    else
      Process(cmd, new java.io.File(path)) !

  }

  val isWindows = System.getProperty("os.name").toLowerCase().contains("win")


  //vivadoPath = path to the Vivado binarys
  //workspacePath = path to the temporary Workspace. Attention the folder is deleted before every run
  //family = FPGA family, for example Artix 7
  //device = the model number of the FPGA
  //frequencyTarget = at which frequency the design runs
  //processorCount = not used yet
  //constraintPath = path to the constraint file. When no constraint file exists a standard constraint file will be made
  //mmcm = if true a mmcm with the frequencyTarget will be generatet. A blackbox for the mmcm is in the package spinal.lib.eda.xilinx
  //writeBitstream = if true a Bitstream file will be written
  //mergedPath = this is for when you use a black box with load a vhdl or verilog file
  //optimize = it has three options standard is the default option, speed is for max frequency and area is for small area
  def apply(vivadoPath : String,workspacePath : String,toplevelPath : String,family : String,device : String,frequencyTarget : HertzNumber = null,processorCount : Int = 1, constraintPath : String = null, mmcm : Boolean = false, writeBitstream : Boolean = false, mergedPath : String = null, optimize : String = "standard") : Report = {
    val projectName = toplevelPath.split("/").last.split("[.]").head
    val targetPeriod = (if (frequencyTarget != null) frequencyTarget else 400 MHz).toTime
    val targetTiming = (((targetPeriod * 1e9)) % 1) toDouble
    val synthopt = optimize match {
      case "area" => "-directive AreaOptimized_high -control_set_opt_threshold 1"
      case "speed" => "-fanout_limit 400 -fsm_extraction one_hot -keep_equivalent_registers -resource_sharing off -no_lc -shreg_min_size 5"
      case _ => ""
    }
    val impopt = optimize match {
      case "area" => "-directive ExploreArea"
      case "speed" => "-directive Explore"
      case _ => ""
    }
    val workspacePathFile = new File(workspacePath)
    FileUtils.deleteDirectory(workspacePathFile)
    workspacePathFile.mkdir()
    FileUtils.copyFileToDirectory(new File(toplevelPath), workspacePathFile)
    if (constraintPath != null) {
      FileUtils.copyFileToDirectory(new File(constraintPath), workspacePathFile)
    }

    val isVhdl = toplevelPath.endsWith(".vhd") || toplevelPath.endsWith(".vhdl")
    val isMVHDL = if (mergedPath != null) mergedPath.endsWith(".vhd") || mergedPath.endsWith(".vhdl") else false
    val tcl = new java.io.FileWriter(Paths.get(workspacePath,"doit.tcl").toFile)
    tcl.write(
      s"""read_${if(isVhdl) "vhdl" else "verilog"} $toplevelPath
         ${if(mmcm) "read_vhdl mmcm.vhd" else ""}
         ${if(mergedPath != null) if(isMVHDL) "read_vhdl" + mergedPath else "read_verilog" + mergedPath else "" }
read_xdc ${if(constraintPath == null) "doit.xdc" else constraintPath}
synth_design -part $device -top ${toplevelPath.split("\\.").head} $synthopt
opt_design $impopt
place_design $impopt
route_design $impopt
report_utilization
report_timing
${if(writeBitstream) "write_bitstream -force " +  toplevelPath.split("\\.").head + ".bit"}        """
    )

    tcl.flush();
    tcl.close();

    if (constraintPath == null) {
      val xdc = new java.io.FileWriter(Paths.get(workspacePath, "doit.xdc").toFile)
      xdc.write(s"""create_clock -period ${(targetPeriod * 1e9) toBigDecimal} [get_ports clk]""")

      xdc.flush();
      xdc.close();
    }

    if (mmcm) {
      val mmcm = new java.io.FileWriter(Paths.get(workspacePath, "mmcm.vhd").toFile)
      mmcm.write((s"""library ieee;
use ieee.std_logic_1164.all;

library unisim;
use unisim.vcomponents.all;

entity PLL is

  port (clkIn    : in  std_logic;
        clkOut   : out std_logic;
        isLocked : out std_logic);

end PLL;

architecture Structural of PLL is

  -- Control signals
  signal locked              : std_logic;  -- The MMCM has achieved phase alignment
  signal psDone_unused       : std_logic;  -- Dummy signal for phase shift done
  signal clkinstopped_unused : std_logic;  -- Input clock has stopped (not used)
  signal clkfbstopped_unused : std_logic;  -- Feedback clock has stopped (not used)
  signal drdy_unused         : std_logic;  -- Reconfiguration ready signal

  signal do_unused : std_logic_vector(15 downto 0);  -- Reconfiguration data out

  -- Internal clock signals
  signal clkInI       : std_logic;      -- Internal buffered input clock
  signal clkI1        : std_logic;      -- Internal output clock 1
  signal clkOutI1     : std_logic;      -- Internal already buffered output clock 1
  signal clkDI_unused : std_logic;      -- Internal delayed output clock

  -- Feedback clock signals
  signal clkfbI    : std_logic;         -- Internal unbuffered feedback clock
  signal clkfbIBuf : std_logic;         -- Internal buffered feedback clock

  -- Unused clock ports
  signal clkfbb_unused : std_logic;
  signal clk0b_unused  : std_logic;
  signal clk1b_unused  : std_logic;
  signal clk2_unused   : std_logic;
  signal clk2b_unused  : std_logic;
  signal clk3_unused   : std_logic;
  signal clk3b_unused  : std_logic;
  signal clk4_unused   : std_logic;
  signal clk5_unused   : std_logic;
  signal clk6_unused   : std_logic;

begin

  -- Instantiate a input clock buffer
  clkInBuffer : IBUFG
    port map (O => clkInI,
              I => clkIn);

  -- Instantiate a clock buffer for the internal feedback signal
  feedbackBuffer : BUFG
    port map (O => clkfbIBuf,
              I => clkfbI);

  -- Instantiate a clock manager
  clkgen : MMCME2_ADV

    generic map (
      BANDWIDTH => "OPTIMIZED",         -- MMCM programming affecting jitter

      CLKOUT4_CASCADE => false,         -- don't divide output more than 128

      COMPENSATION => "ZHOLD",          -- Clk input compensation for feedback

      STARTUP_WAIT => false,            -- not supported yet (set to default)

      DIVCLK_DIVIDE => 1,               -- Division ratio for output clocks

      CLKFBOUT_MULT_F      => 10.000,   -- set feedback base
      CLKFBOUT_PHASE       => 0.000,    -- phase of feedback output
      CLKFBOUT_USE_FINE_PS => false,    -- Don't enable fine shift

      --CLKOUT0_DIVIDE_F    => 12.500,    -- Scale clock to 80Mhz
      CLKOUT0_DIVIDE_F    => ${(targetPeriod * 1e9) toBigDecimal}${if(targetTiming == 0) ".000" else ""},
      CLKOUT0_PHASE       => 0.000,     -- Phase of clock 0 (no shift)
      CLKOUT0_DUTY_CYCLE  => 0.500,     -- Duty cycle of clock 0
      CLKOUT0_USE_FINE_PS => false,     -- No fine shift for clock 0

      CLKOUT1_DIVIDE      => 10,        -- Scale clock 1 to 1.0
      CLKOUT1_PHASE       => 270.000,   -- Phase of clock 1 (delayed)
      CLKOUT1_DUTY_CYCLE  => 0.500,     -- Duty cycle of clock 1
      CLKOUT1_USE_FINE_PS => false,     -- No fine shift for clock 1

      CLKIN1_PERIOD => 10.000,          -- 10ns input clock period -> 100Mhz

      REF_JITTER1 => 0.010)             -- Set expected jitter to default

    port map (
      CLKFBOUT  => clkfbI,
      CLKFBOUTB => clkfbb_unused,       -- Unused inverted feedback

      -- Output clocks (delayed and non inverted)
      CLKOUT0  => clkI1,
      CLKOUT0B => clk0b_unused,
      CLKOUT1  => clkDI_unused,
      CLKOUT1B => clk1b_unused,

      -- Unused clocks
      CLKOUT2  => clk2_unused,
      CLKOUT2B => clk2b_unused,
      CLKOUT3  => clk3_unused,
      CLKOUT3B => clk3b_unused,
      CLKOUT4  => clk4_unused,
      CLKOUT5  => clk5_unused,
      CLKOUT6  => clk6_unused,

      -- Input clock control
      CLKFBIN  => clkfbIBuf,            -- Buffered feedback signal
      CLKIN1   => clkInI,               -- Input clock
      CLKIN2   => '0',                  -- Second input clock is not used
      CLKINSEL => '1',                  -- Select primary input clock

      -- Disable dynamic reconfiguration
      DADDR => (others => '0'),         -- set all address bits to 0
      DCLK  => '0',                     -- No clock for the reconfig port
      DEN   => '0',                     -- Disable to reconfiguration port
      DI    => (others => '0'),         -- set reconfiguration data to 0
      DO    => do_unused,               -- Ignore MMCM reconfig data output
      DRDY  => drdy_unused,             -- Ignore the ready signal
      DWE   => '0',                     -- Disable the write enable

      -- Don't implement dynamic phase shift
      PSCLK    => '0',                  -- No phase shift clock
      PSEN     => '0',                  -- Disable phase shift
      PSINCDEC => '0',                  -- No inc / dec of phase shift
      PSDONE   => psDone_unused,        -- Dummy signal for phase shift done

      -- Other control and status signals
      LOCKED       => locked,               -- MMCE clock is stable
      CLKINSTOPPED => clkinstopped_unused,  -- Input clock has stopped (not used)
      CLKFBSTOPPED => clkfbstopped_unused,  -- Feedback clock has stopped (not used)
      PWRDWN       => '0',                  -- Don't power down MMCE
      RST          => '0');                 -- No reset after startup

  -- Scaled clock
  clk1Buf : BUFGCE
    port map (O  => clkOutI1,
              CE => locked,
              I  => clkI1);
  clkOut <= clkOutI1;

  -- Provide the locked signal to the outside world
  isLocked <= locked;

end architecture;

"""))
      mmcm.flush();
      mmcm.close();
    }
    doCmd(s"$vivadoPath/vivado -nojournal -log doit.log -mode batch -source doit.tcl", workspacePath)

    new Report{
      override def getFMax(): Double =  {
        import scala.io.Source
        val report = Source.fromFile(Paths.get(workspacePath,"doit.log").toFile).getLines.mkString
        val intFind = "-?(\\d+\\.?)+".r
        val slack = try {
          (family match {
            case "Artix 7" =>
              intFind.findFirstIn("-?(\\d+.?)+ns  \\(required time - arrival time\\)".r.findFirstIn(report).get).get
          }).toDouble
        }catch{
          case e : Exception => -1.0
        }
        return 1.0/(targetPeriod.toDouble-slack*1e-9)
      }
      override def getArea(): String =  {
        import scala.io.Source
        val report = Source.fromFile(Paths.get(workspacePath,"doit.log").toFile).getLines.mkString
        val intFind = "(\\d+,?)+".r
        val leArea = try {
          family match {
            case "Artix 7" =>
              intFind.findFirstIn("Slice LUTs[ ]*\\|[ ]*(\\d+,?)+".r.findFirstIn(report).get).get + " LUT " +
                intFind.findFirstIn("Slice Registers[ ]*\\|[ ]*(\\d+,?)+".r.findFirstIn(report).get).get + " FF "
          }
        }catch{
          case e : Exception => "???"
        }
        return leArea
      }
    }
  }

  def main(args: Array[String]) {
    val report = VivadoFlow(
      vivadoPath="/eda/Xilinx/Vivado/2017.2/bin",
      workspacePath="/home/spinalvm/tmp",
      toplevelPath="TopLevel.vhd",
      family="Artix 7",
      device="xc7k70t-fbg676-3",
      frequencyTarget = 1 MHz
    )
    println(report.getArea())
    println(report.getFMax())
  }
}


object QuartusTest {
  def main(args: Array[String]) {

    Paths.get("~")
  }
}