################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/AS5600.c \
../Core/Src/Controller.c \
../Core/Src/Cytron_MDXX.c \
../Core/Src/DRV8825.c \
../Core/Src/MathOperation.c \
../Core/Src/PWM.c \
../Core/Src/QEI.c \
../Core/Src/RMX_Motor.c \
../Core/Src/WCS1700.c \
../Core/Src/ZGA60FM_1200RPM.c \
../Core/Src/main.c \
../Core/Src/stm32g4xx_hal_msp.c \
../Core/Src/stm32g4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32g4xx.c 

OBJS += \
./Core/Src/AS5600.o \
./Core/Src/Controller.o \
./Core/Src/Cytron_MDXX.o \
./Core/Src/DRV8825.o \
./Core/Src/MathOperation.o \
./Core/Src/PWM.o \
./Core/Src/QEI.o \
./Core/Src/RMX_Motor.o \
./Core/Src/WCS1700.o \
./Core/Src/ZGA60FM_1200RPM.o \
./Core/Src/main.o \
./Core/Src/stm32g4xx_hal_msp.o \
./Core/Src/stm32g4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32g4xx.o 

C_DEPS += \
./Core/Src/AS5600.d \
./Core/Src/Controller.d \
./Core/Src/Cytron_MDXX.d \
./Core/Src/DRV8825.d \
./Core/Src/MathOperation.d \
./Core/Src/PWM.d \
./Core/Src/QEI.d \
./Core/Src/RMX_Motor.d \
./Core/Src/WCS1700.d \
./Core/Src/ZGA60FM_1200RPM.d \
./Core/Src/main.d \
./Core/Src/stm32g4xx_hal_msp.d \
./Core/Src/stm32g4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32g4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/AS5600.cyclo ./Core/Src/AS5600.d ./Core/Src/AS5600.o ./Core/Src/AS5600.su ./Core/Src/Controller.cyclo ./Core/Src/Controller.d ./Core/Src/Controller.o ./Core/Src/Controller.su ./Core/Src/Cytron_MDXX.cyclo ./Core/Src/Cytron_MDXX.d ./Core/Src/Cytron_MDXX.o ./Core/Src/Cytron_MDXX.su ./Core/Src/DRV8825.cyclo ./Core/Src/DRV8825.d ./Core/Src/DRV8825.o ./Core/Src/DRV8825.su ./Core/Src/MathOperation.cyclo ./Core/Src/MathOperation.d ./Core/Src/MathOperation.o ./Core/Src/MathOperation.su ./Core/Src/PWM.cyclo ./Core/Src/PWM.d ./Core/Src/PWM.o ./Core/Src/PWM.su ./Core/Src/QEI.cyclo ./Core/Src/QEI.d ./Core/Src/QEI.o ./Core/Src/QEI.su ./Core/Src/RMX_Motor.cyclo ./Core/Src/RMX_Motor.d ./Core/Src/RMX_Motor.o ./Core/Src/RMX_Motor.su ./Core/Src/WCS1700.cyclo ./Core/Src/WCS1700.d ./Core/Src/WCS1700.o ./Core/Src/WCS1700.su ./Core/Src/ZGA60FM_1200RPM.cyclo ./Core/Src/ZGA60FM_1200RPM.d ./Core/Src/ZGA60FM_1200RPM.o ./Core/Src/ZGA60FM_1200RPM.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32g4xx_hal_msp.cyclo ./Core/Src/stm32g4xx_hal_msp.d ./Core/Src/stm32g4xx_hal_msp.o ./Core/Src/stm32g4xx_hal_msp.su ./Core/Src/stm32g4xx_it.cyclo ./Core/Src/stm32g4xx_it.d ./Core/Src/stm32g4xx_it.o ./Core/Src/stm32g4xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32g4xx.cyclo ./Core/Src/system_stm32g4xx.d ./Core/Src/system_stm32g4xx.o ./Core/Src/system_stm32g4xx.su

.PHONY: clean-Core-2f-Src

