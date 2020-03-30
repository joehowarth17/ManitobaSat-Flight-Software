set_family {SmartFusion2}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\spi_clockmux.v}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\spi_chanctrl.v}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\spi_fifo.v}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\spi_rf.v}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\spi_control.v}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\spi.v}
read_verilog -mode verilog_2k -lib CORESPI_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CORESPI\5.2.104\rtl\vlog\core\corespi.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\work\CORESPI1_1\CORESPI1_1.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CoreResetP\7.1.100\rtl\vlog\core\coreresetp_pcie_hotreset.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CoreResetP\7.1.100\rtl\vlog\core\coreresetp.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\work\cdh_tsat5_system_sb\CCC_0\cdh_tsat5_system_sb_CCC_0_FCCC.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\work\cdh_tsat5_system_sb\FABOSC_0\cdh_tsat5_system_sb_FABOSC_0_OSC.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\work\cdh_tsat5_system_sb_MSS\cdh_tsat5_system_sb_MSS.v}
read_verilog -mode verilog_2k -lib COREAPB3_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CoreAPB3\4.1.100\rtl\vlog\core_obfuscated\coreapb3_muxptob3.v}
read_verilog -mode verilog_2k -lib COREAPB3_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CoreAPB3\4.1.100\rtl\vlog\core_obfuscated\coreapb3_iaddr_reg.v}
read_verilog -mode verilog_2k -lib COREAPB3_LIB {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\Actel\DirectCore\CoreAPB3\4.1.100\rtl\vlog\core_obfuscated\coreapb3.v}
read_verilog -mode verilog_2k {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\component\work\cdh_tsat5_system_sb\cdh_tsat5_system_sb.v}
set_top_level {cdh_tsat5_system_sb}
map_netlist
check_constraints {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\constraint\synthesis_sdc_errors.log}
write_fdc {C:\Users\Files\MBSAT\Test4\ManitobaSat-Flight-Software\mbsat-fsw-libero\designer\cdh_tsat5_system_sb\synthesis.fdc}
