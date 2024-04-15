# CMSIS Build CMakeLists generated on 2024-04-15T15:23:14

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET project_s)
set(CPU Cortex-M33)
set(PRJ_DIR "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/prj_secure")
set(OUT_DIR "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/out/project_s/Board/Debug")
set(INT_DIR "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/tmp/project_s/Board/Debug")
set(FPU SP_FPU)
set(DSP DSP)
set(TZ TZ)
set(SECURE Secure)
set(BYTE_ORDER Little-endian)
set(OPTIMIZE none)
set(DEBUG on)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-std=gnu11 -Wno-macro-redefined -Wno-pragma-pack -Wno-parentheses-equality -Wno-license-management")
set(CXX_FLAGS_GLOBAL "-Wno-macro-redefined -Wno-pragma-pack -Wno-parentheses-equality -Wno-license-management")
set(LD_FLAGS_GLOBAL "--entry=Reset_Handler --map --info summarysizes --summary_stderr --diag_suppress=L6314W")
set(LD_SCRIPT "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/prj_secure/RTE/Device/STM32U585AIIx/ac6_linker_script.sct.src")
set(LD_REGIONS "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/prj_secure/RTE/Device/STM32U585AIIx/regions_B_U585I_IOT02A.h")
set(LD_SCRIPT_PP "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/tmp/project_s/Board/Debug/ac6_linker_script.sct")
set(CMSE_LIB "project_s_CMSE_Lib.o")

set(DEFINES
  STM32U585xx
  _RTE_
  USE_HAL_DRIVER
  USE_FULL_LL_DRIVER
)

set(INC_PATHS
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Inc"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/CMSIS/Device/ST/STM32U5xx/Include"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Inc/Legacy"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure/Inc"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure_nsclib"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/MX_Device/project_s"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/prj_secure/RTE/_Debug_Board"
  "D:/PACK/ARM/CMSIS/6.0.0/CMSIS/Core/Include"
  "D:/PACK/Keil/STM32U5xx_DFP/3.0.0-extgen0/Drivers/CMSIS/Device/ST/STM32U5xx/Include"
)

set(AS_ARM_SRC_FILES
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/MDK-ARM/startup_stm32u585xx.s"
)

set(CC_SRC_FILES
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cortex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_dma_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_exti.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_flash.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_flash_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gpio.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_gtzc.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_i2c_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_icache.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_mdf.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_ospi.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pcd.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pcd_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_tim.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_tim_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_uart_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_dlyb.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_dma.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_exti.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_gpio.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_lpgpio.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_ucpd.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_usb.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_ll_utils.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure/Src/main.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure/Src/secure_nsc.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure/Src/stm32u5xx_hal_msp.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure/Src/stm32u5xx_it.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/secure_nonsecure/STM32CubeMX/Board/STM32CubeMX/Secure/Src/system_stm32u5xx_s.c"
  "D:/PACK/ARM/CMSIS-Compiler/2.0.0/source/armcc/retarget_io.c"
)

# Toolchain config map

set(REGISTERED_TOOLCHAIN_ROOT "C:/Keil_v5/ARM/ARMCLANG/bin")
set(REGISTERED_TOOLCHAIN_VERSION "6.19.4")
set(TOOLCHAIN_VERSION_MIN "6.19.4")
include ("C:/CMSIS_Toolbox/etc/AC6.6.18.0.cmake")
include ("C:/CMSIS_Toolbox/etc/CMSIS-Build-Utils.cmake")

# Setup project

project(${TARGET} LANGUAGES AS_ARM C)

cbuild_get_running_toolchain(TOOLCHAIN_ROOT TOOLCHAIN_VERSION C)

# Global Flags

set(CMAKE_AS_ARM_FLAGS "${AS_ARM_CPU} ${AS_ARM_BYTE_ORDER} ${AS_ARM_DEFINES} ${AS_ARM_OPTIONS_FLAGS} ${AS_ARM_FLAGS} ${AS_FLAGS_GLOBAL}")
cbuild_get_system_includes(CC_SYS_INC_PATHS_LIST CC_SYS_INC_PATHS)
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_BYTE_ORDER} ${CC_DEFINES} ${CC_SECURE} ${CC_OPTIONS_FLAGS} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT_PP}\" ${LD_SECURE} ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Local Flags

foreach(SRC ${AS_ARM_SRC_FILES})
  set_source_files_properties(${SRC} PROPERTIES LANGUAGE AS_ARM)
endforeach()

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${AS_ARM_SRC_FILES} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "project_s")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})

# Linker script pre-processing

add_custom_command(TARGET ${TARGET} PRE_LINK COMMAND ${CPP} ARGS ${CPP_ARGS_LD_SCRIPT} BYPRODUCTS ${LD_SCRIPT_PP})
