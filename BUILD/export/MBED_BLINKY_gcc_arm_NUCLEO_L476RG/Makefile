# This file was automagically generated by mbed.org. For more information, 
# see http://mbed.org/handbook/Exporting-to-GCC-ARM-Embedded

###############################################################################
# Boiler-plate

# cross-platform directory manipulation
ifeq ($(shell echo $$OS),$$OS)
    MAKEDIR = if not exist "$(1)" mkdir "$(1)"
    RM = rmdir /S /Q "$(1)"
else
    MAKEDIR = '$(SHELL)' -c "mkdir -p \"$(1)\""
    RM = '$(SHELL)' -c "rm -rf \"$(1)\""
endif

OBJDIR := BUILD
# Move to the build directory
ifeq (,$(filter $(OBJDIR),$(notdir $(CURDIR))))
.SUFFIXES:
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
MAKETARGET = '$(MAKE)' --no-print-directory -C $(OBJDIR) -f '$(mkfile_path)' \
		'SRCDIR=$(CURDIR)' $(MAKECMDGOALS)
.PHONY: $(OBJDIR) clean
all:
	+@$(call MAKEDIR,$(OBJDIR))
	+@$(MAKETARGET)
$(OBJDIR): all
Makefile : ;
% :: $(OBJDIR) ; :
clean :
	$(call RM,$(OBJDIR))

else

# trick rules into thinking we are in the root, when we are in the bulid dir
VPATH = ..

# Boiler-plate
###############################################################################
# Project settings

PROJECT := MBED_BLINKY_gcc_arm_NUCLEO_L476RG


# Project settings
###############################################################################
# Objects and Paths

OBJECTS += TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/PeripheralPins.o
OBJECTS += TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/device/TOOLCHAIN_GCC_ARM/startup_stm32l476xx.o
OBJECTS += TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/device/cmsis_nvic.o
OBJECTS += TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/device/system_stm32l4xx.o
OBJECTS += TARGET_STM/TARGET_STM32L4/analogin_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/analogout_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/can_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_adc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_adc_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_can.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_comp.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_cortex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_crc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_crc_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_cryp.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_cryp_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_dac.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_dac_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_dfsdm.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_dma.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_firewall.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_flash.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_flash_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_flash_ramfunc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_gpio.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_hcd.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_i2c.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_i2c_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_irda.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_iwdg.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_lcd.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_lptim.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_msp_template.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_nand.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_nor.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_opamp.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_opamp_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_pcd.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_pcd_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_pwr.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_pwr_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_qspi.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_rcc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_rcc_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_rng.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_rtc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_rtc_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_sai.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_sd.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_smartcard.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_smartcard_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_smbus.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_spi.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_spi_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_sram.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_swpmi.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_tim.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_tim_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_tsc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_uart.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_uart_ex.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_usart.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_hal_wwdg.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_adc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_comp.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_crc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_crs.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_dac.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_dma.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_exti.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_fmc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_gpio.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_i2c.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_lptim.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_lpuart.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_opamp.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_pwr.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_rcc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_rng.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_rtc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_sdmmc.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_spi.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_swpmi.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_tim.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_usart.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_usb.o
OBJECTS += TARGET_STM/TARGET_STM32L4/device/stm32l4xx_ll_utils.o
OBJECTS += TARGET_STM/TARGET_STM32L4/gpio_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/gpio_irq_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/lp_ticker.o
OBJECTS += TARGET_STM/TARGET_STM32L4/mbed_overrides.o
OBJECTS += TARGET_STM/TARGET_STM32L4/pinmap.o
OBJECTS += TARGET_STM/TARGET_STM32L4/port_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/pwmout_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/rtc_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/serial_api.o
OBJECTS += TARGET_STM/TARGET_STM32L4/sleep.o
OBJECTS += TARGET_STM/TARGET_STM32L4/spi_api.o
OBJECTS += TARGET_STM/hal_tick_16b.o
OBJECTS += TARGET_STM/hal_tick_32b.o
OBJECTS += TARGET_STM/i2c_api.o
OBJECTS += TARGET_STM/stm_spi_api.o
OBJECTS += TARGET_STM/trng_api.o
OBJECTS += TARGET_STM/us_ticker_16b.o
OBJECTS += TARGET_STM/us_ticker_32b.o
OBJECTS += main.o
OBJECTS += mbed_gpio.o
OBJECTS += mbed_lp_ticker_api.o
OBJECTS += mbed_pinmap_common.o
OBJECTS += mbed_ticker_api.o
OBJECTS += mbed_us_ticker_api.o
OBJECTS += test_env.o


INCLUDE_PATHS += -I../
INCLUDE_PATHS += -I../.
INCLUDE_PATHS += -I../TARGET_STM
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4/TARGET_L476_L486
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/TARGET_NUCLEO_L476RG
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/TARGET_NUCLEO_L476RG/device
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/device
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/device/TOOLCHAIN_GCC_ARM
INCLUDE_PATHS += -I../TARGET_STM/TARGET_STM32L4/device
INCLUDE_PATHS += -I../storage_abstraction

LIBRARY_PATHS :=
LIBRARIES :=
LINKER_SCRIPT := ../TARGET_STM/TARGET_STM32L4/TARGET_L476_L486/device/TOOLCHAIN_GCC_ARM/STM32L476XX.ld

# Objects and Paths
###############################################################################
# Tools and Flags

AS      = 'arm-none-eabi-gcc' '-x' 'assembler-with-cpp' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
CC      = 'arm-none-eabi-gcc' '-std=gnu99' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
CPP     = 'arm-none-eabi-g++' '-std=gnu++98' '-fno-rtti' '-Wvla' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
LD      = 'arm-none-eabi-gcc' '-Wl,--gc-sections' '-Wl,--wrap,main' '-Wl,--wrap,_malloc_r' '-Wl,--wrap,_free_r' '-Wl,--wrap,_realloc_r' '-Wl,--wrap,_calloc_r' '-Wl,--wrap,exit' '-Wl,--wrap,atexit' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
ELF2BIN = 'arm-none-eabi-objcopy'


C_FLAGS += -std=gnu99
C_FLAGS += -DDEVICE_I2C=1
C_FLAGS += -D__MBED__=1
C_FLAGS += -DDEVICE_I2CSLAVE=1
C_FLAGS += -DTARGET_LIKE_MBED
C_FLAGS += -DDEVICE_PORTOUT=1
C_FLAGS += -DDEVICE_PORTINOUT=1
C_FLAGS += -DTARGET_RTOS_M4_M7
C_FLAGS += -DDEVICE_LOWPOWERTIMER=1
C_FLAGS += -DDEVICE_RTC=1
C_FLAGS += -DTOOLCHAIN_object
C_FLAGS += -DDEVICE_SERIAL_ASYNCH=1
C_FLAGS += -D__CMSIS_RTOS
C_FLAGS += -DDEVICE_ANALOGOUT=1
C_FLAGS += -DTOOLCHAIN_GCC
C_FLAGS += -DDEVICE_CAN=1
C_FLAGS += -DTARGET_CORTEX_M
C_FLAGS += -DDEVICE_I2C_ASYNCH=1
C_FLAGS += -DTARGET_LIKE_CORTEX_M4
C_FLAGS += -DTARGET_STM32L476RG
C_FLAGS += -DTARGET_M4
C_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
C_FLAGS += -DTARGET_STM32L4
C_FLAGS += -DDEVICE_SPI_ASYNCH=1
C_FLAGS += -DDEVICE_PWMOUT=1
C_FLAGS += -DDEVICE_INTERRUPTIN=1
C_FLAGS += -DTARGET_NUCLEO_L476RG
C_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
C_FLAGS += -D__CORTEX_M4
C_FLAGS += -DDEVICE_STDIO_MESSAGES=1
C_FLAGS += -DTARGET_FF_MORPHO
C_FLAGS += -D__FPU_PRESENT=1
C_FLAGS += -DTARGET_FF_ARDUINO
C_FLAGS += -DDEVICE_PORTIN=1
C_FLAGS += -DTARGET_RELEASE
C_FLAGS += -DTARGET_L476_L486
C_FLAGS += -DDEVICE_SERIAL_FC=1
C_FLAGS += -DDEVICE_TRNG=1
C_FLAGS += -D__MBED_CMSIS_RTOS_CM
C_FLAGS += -DDEVICE_SLEEP=1
C_FLAGS += -DTOOLCHAIN_GCC_ARM
C_FLAGS += -DDEVICE_SPI=1
C_FLAGS += -DTARGET_STM
C_FLAGS += -DMBED_BUILD_TIMESTAMP=1482215011.82
C_FLAGS += -DDEVICE_SPISLAVE=1
C_FLAGS += -DDEVICE_ANALOGIN=1
C_FLAGS += -DDEVICE_SERIAL=1
C_FLAGS += -DARM_MATH_CM4
C_FLAGS += -include
C_FLAGS += mbed_config.h

CXX_FLAGS += -std=gnu++98
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -DDEVICE_I2C=1
CXX_FLAGS += -D__MBED__=1
CXX_FLAGS += -DDEVICE_I2CSLAVE=1
CXX_FLAGS += -DTARGET_LIKE_MBED
CXX_FLAGS += -DDEVICE_PORTOUT=1
CXX_FLAGS += -DDEVICE_PORTINOUT=1
CXX_FLAGS += -DTARGET_RTOS_M4_M7
CXX_FLAGS += -DDEVICE_LOWPOWERTIMER=1
CXX_FLAGS += -DDEVICE_RTC=1
CXX_FLAGS += -DTOOLCHAIN_object
CXX_FLAGS += -DDEVICE_SERIAL_ASYNCH=1
CXX_FLAGS += -D__CMSIS_RTOS
CXX_FLAGS += -DDEVICE_ANALOGOUT=1
CXX_FLAGS += -DTOOLCHAIN_GCC
CXX_FLAGS += -DDEVICE_CAN=1
CXX_FLAGS += -DTARGET_CORTEX_M
CXX_FLAGS += -DDEVICE_I2C_ASYNCH=1
CXX_FLAGS += -DTARGET_LIKE_CORTEX_M4
CXX_FLAGS += -DTARGET_STM32L476RG
CXX_FLAGS += -DTARGET_M4
CXX_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
CXX_FLAGS += -DTARGET_STM32L4
CXX_FLAGS += -DDEVICE_SPI_ASYNCH=1
CXX_FLAGS += -DDEVICE_PWMOUT=1
CXX_FLAGS += -DDEVICE_INTERRUPTIN=1
CXX_FLAGS += -DTARGET_NUCLEO_L476RG
CXX_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
CXX_FLAGS += -D__CORTEX_M4
CXX_FLAGS += -DDEVICE_STDIO_MESSAGES=1
CXX_FLAGS += -DTARGET_FF_MORPHO
CXX_FLAGS += -D__FPU_PRESENT=1
CXX_FLAGS += -DTARGET_FF_ARDUINO
CXX_FLAGS += -DDEVICE_PORTIN=1
CXX_FLAGS += -DTARGET_RELEASE
CXX_FLAGS += -DTARGET_L476_L486
CXX_FLAGS += -DDEVICE_SERIAL_FC=1
CXX_FLAGS += -DDEVICE_TRNG=1
CXX_FLAGS += -D__MBED_CMSIS_RTOS_CM
CXX_FLAGS += -DDEVICE_SLEEP=1
CXX_FLAGS += -DTOOLCHAIN_GCC_ARM
CXX_FLAGS += -DDEVICE_SPI=1
CXX_FLAGS += -DTARGET_STM
CXX_FLAGS += -DMBED_BUILD_TIMESTAMP=1482215011.82
CXX_FLAGS += -DDEVICE_SPISLAVE=1
CXX_FLAGS += -DDEVICE_ANALOGIN=1
CXX_FLAGS += -DDEVICE_SERIAL=1
CXX_FLAGS += -DARM_MATH_CM4
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h

ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
ASM_FLAGS += -D__CORTEX_M4
ASM_FLAGS += -DARM_MATH_CM4
ASM_FLAGS += -D__FPU_PRESENT=1
ASM_FLAGS += -D__MBED_CMSIS_RTOS_CM
ASM_FLAGS += -D__CMSIS_RTOS


LD_FLAGS :=-Wl,--gc-sections -Wl,--wrap,main -Wl,--wrap,_malloc_r -Wl,--wrap,_free_r -Wl,--wrap,_realloc_r -Wl,--wrap,_calloc_r -Wl,--wrap,exit -Wl,--wrap,atexit -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=softfp 

LD_SYS_LIBS += -lstdc++
LD_SYS_LIBS += -lsupc++
LD_SYS_LIBS += -lm
LD_SYS_LIBS += -lc
LD_SYS_LIBS += -lgcc
LD_SYS_LIBS += -lnosys


# Tools and Flags
###############################################################################
# Rules

.PHONY: all lst size


all: $(PROJECT).bin $(PROJECT).hex size


.asm.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
	@$(AS) -c $(ASM_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.s.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
	@$(AS) -c $(ASM_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.S.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
	@$(AS) -c $(ASM_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.c.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CC) $(C_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.cpp.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CPP) $(CXX_FLAGS) $(INCLUDE_PATHS) -o $@ $<


$(PROJECT).elf: $(OBJECTS) $(SYS_OBJECTS) $(LINKER_SCRIPT)
	+@echo "link: $(notdir $@)"
	@$(LD) $(LD_FLAGS) -T $(filter %.ld, $^) $(LIBRARY_PATHS) --output $@ $(filter %.o, $^) $(LIBRARIES) $(LD_SYS_LIBS)


$(PROJECT).bin: $(PROJECT).elf
	$(ELF2BIN) -O binary $< $@
	+@echo "===== bin file ready to flash: $(OBJDIR)/$@ =====" 

$(PROJECT).hex: $(PROJECT).elf
	$(ELF2BIN) -O ihex $< $@


# Rules
###############################################################################
# Dependencies

DEPS = $(OBJECTS:.o=.d) $(SYS_OBJECTS:.o=.d)
-include $(DEPS)
endif

# Dependencies
###############################################################################
