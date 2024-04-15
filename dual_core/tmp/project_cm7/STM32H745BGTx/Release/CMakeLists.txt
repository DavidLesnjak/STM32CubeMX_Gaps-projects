# CMSIS Build CMakeLists generated on 2024-04-15T15:02:15

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET project_cm7)
set(CPU Cortex-M7)
set(PRJ_DIR "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/prj_cm7")
set(OUT_DIR "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/out/project_cm7/STM32H745BGTx/Release")
set(INT_DIR "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/tmp/project_cm7/STM32H745BGTx/Release")
set(FPU DP_FPU)
set(BYTE_ORDER Little-endian)
set(OPTIMIZE balanced)
set(DEBUG off)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-std=gnu11 -Wno-macro-redefined -Wno-pragma-pack -Wno-parentheses-equality -Wno-license-management")
set(CXX_FLAGS_GLOBAL "-Wno-macro-redefined -Wno-pragma-pack -Wno-parentheses-equality -Wno-license-management")
set(LD_FLAGS_GLOBAL "--entry=Reset_Handler --map --info summarysizes --summary_stderr --diag_suppress=L6314W")
set(LD_SCRIPT "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/MDK-ARM/stm32h745xg_flash_CM7.sct")

set(DEFINES
  CORE_CM7
  STM32H745xG
  _RTE_
  USE_HAL_DRIVER
  STM32H745xx
)

set(INC_PATHS
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Inc"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/CMSIS/Device/ST/STM32H7xx/Include"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/CM7/Inc"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/MX_Device/project_cm7"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/prj_cm7/RTE/_Release_STM32H745BGTx"
  "D:/PACK/ARM/CMSIS/6.0.0/CMSIS/Core/Include"
  "D:/PACK/Keil/STM32H7xx_DFP/4.0.0-extgen2/Drivers/CMSIS/Device/ST/STM32H7xx/Include"
)

set(AS_ARM_SRC_FILES
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/MDK-ARM/startup_stm32h745xx_CM7.s"
)

set(CC_SRC_FILES
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/CM7/Src/main.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/CM7/Src/stm32h7xx_hal_msp.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/CM7/Src/stm32h7xx_it.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Common/Src/system_stm32h7xx_dualcore_boot_cm4_cm7.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_cortex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_dma.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_dma_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_eth.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_eth_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_exti.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_flash.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_flash_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_gpio.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_hsem.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_i2c.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_i2c_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_mdma.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_pwr.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_pwr_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_rcc.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_rcc_ex.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_tim.c"
  "D:/GitHub/DavidLesnjak/STM32CubeMX_Gaps-projects/dual_core/STM32CubeMX/STM32H745BGTx/STM32CubeMX/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_tim_ex.c"
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
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_BYTE_ORDER} ${CC_DEFINES} ${CC_OPTIONS_FLAGS} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT}\" ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Local Flags

foreach(SRC ${AS_ARM_SRC_FILES})
  set_source_files_properties(${SRC} PROPERTIES LANGUAGE AS_ARM)
endforeach()

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${AS_ARM_SRC_FILES} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "project_cm7")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})
