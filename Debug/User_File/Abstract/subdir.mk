################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User_File/Abstract/abs_usart.c 

OBJS += \
./User_File/Abstract/abs_usart.o 

C_DEPS += \
./User_File/Abstract/abs_usart.d 


# Each subdirectory must supply rules for building sources it contributes
User_File/Abstract/%.o User_File/Abstract/%.su User_File/Abstract/%.cyclo: ../User_File/Abstract/%.c User_File/Abstract/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L431xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen/Fonts" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/Abstract" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User_File-2f-Abstract

clean-User_File-2f-Abstract:
	-$(RM) ./User_File/Abstract/abs_usart.cyclo ./User_File/Abstract/abs_usart.d ./User_File/Abstract/abs_usart.o ./User_File/Abstract/abs_usart.su

.PHONY: clean-User_File-2f-Abstract

