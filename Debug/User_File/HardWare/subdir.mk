################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User_File/HardWare/hw_Rtc.c \
../User_File/HardWare/hw_Tim.c \
../User_File/HardWare/hw_Uart.c \
../User_File/HardWare/hw_gpio.c \
../User_File/HardWare/hw_i2c.c \
../User_File/HardWare/hw_power.c \
../User_File/HardWare/hw_tsc.c 

OBJS += \
./User_File/HardWare/hw_Rtc.o \
./User_File/HardWare/hw_Tim.o \
./User_File/HardWare/hw_Uart.o \
./User_File/HardWare/hw_gpio.o \
./User_File/HardWare/hw_i2c.o \
./User_File/HardWare/hw_power.o \
./User_File/HardWare/hw_tsc.o 

C_DEPS += \
./User_File/HardWare/hw_Rtc.d \
./User_File/HardWare/hw_Tim.d \
./User_File/HardWare/hw_Uart.d \
./User_File/HardWare/hw_gpio.d \
./User_File/HardWare/hw_i2c.d \
./User_File/HardWare/hw_power.d \
./User_File/HardWare/hw_tsc.d 


# Each subdirectory must supply rules for building sources it contributes
User_File/HardWare/%.o User_File/HardWare/%.su User_File/HardWare/%.cyclo: ../User_File/HardWare/%.c User_File/HardWare/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L431xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen/Fonts" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/Abstract" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User_File-2f-HardWare

clean-User_File-2f-HardWare:
	-$(RM) ./User_File/HardWare/hw_Rtc.cyclo ./User_File/HardWare/hw_Rtc.d ./User_File/HardWare/hw_Rtc.o ./User_File/HardWare/hw_Rtc.su ./User_File/HardWare/hw_Tim.cyclo ./User_File/HardWare/hw_Tim.d ./User_File/HardWare/hw_Tim.o ./User_File/HardWare/hw_Tim.su ./User_File/HardWare/hw_Uart.cyclo ./User_File/HardWare/hw_Uart.d ./User_File/HardWare/hw_Uart.o ./User_File/HardWare/hw_Uart.su ./User_File/HardWare/hw_gpio.cyclo ./User_File/HardWare/hw_gpio.d ./User_File/HardWare/hw_gpio.o ./User_File/HardWare/hw_gpio.su ./User_File/HardWare/hw_i2c.cyclo ./User_File/HardWare/hw_i2c.d ./User_File/HardWare/hw_i2c.o ./User_File/HardWare/hw_i2c.su ./User_File/HardWare/hw_power.cyclo ./User_File/HardWare/hw_power.d ./User_File/HardWare/hw_power.o ./User_File/HardWare/hw_power.su ./User_File/HardWare/hw_tsc.cyclo ./User_File/HardWare/hw_tsc.d ./User_File/HardWare/hw_tsc.o ./User_File/HardWare/hw_tsc.su

.PHONY: clean-User_File-2f-HardWare

