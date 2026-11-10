################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User_File/HardWare/Screen/Fonts/font12.c \
../User_File/HardWare/Screen/Fonts/font12CN.c \
../User_File/HardWare/Screen/Fonts/font16.c \
../User_File/HardWare/Screen/Fonts/font16CN.c \
../User_File/HardWare/Screen/Fonts/font20.c \
../User_File/HardWare/Screen/Fonts/font24.c \
../User_File/HardWare/Screen/Fonts/font24CN.c \
../User_File/HardWare/Screen/Fonts/font8.c \
../User_File/HardWare/Screen/Fonts/font_abc.c 

OBJS += \
./User_File/HardWare/Screen/Fonts/font12.o \
./User_File/HardWare/Screen/Fonts/font12CN.o \
./User_File/HardWare/Screen/Fonts/font16.o \
./User_File/HardWare/Screen/Fonts/font16CN.o \
./User_File/HardWare/Screen/Fonts/font20.o \
./User_File/HardWare/Screen/Fonts/font24.o \
./User_File/HardWare/Screen/Fonts/font24CN.o \
./User_File/HardWare/Screen/Fonts/font8.o \
./User_File/HardWare/Screen/Fonts/font_abc.o 

C_DEPS += \
./User_File/HardWare/Screen/Fonts/font12.d \
./User_File/HardWare/Screen/Fonts/font12CN.d \
./User_File/HardWare/Screen/Fonts/font16.d \
./User_File/HardWare/Screen/Fonts/font16CN.d \
./User_File/HardWare/Screen/Fonts/font20.d \
./User_File/HardWare/Screen/Fonts/font24.d \
./User_File/HardWare/Screen/Fonts/font24CN.d \
./User_File/HardWare/Screen/Fonts/font8.d \
./User_File/HardWare/Screen/Fonts/font_abc.d 


# Each subdirectory must supply rules for building sources it contributes
User_File/HardWare/Screen/Fonts/%.o User_File/HardWare/Screen/Fonts/%.su User_File/HardWare/Screen/Fonts/%.cyclo: ../User_File/HardWare/Screen/Fonts/%.c User_File/HardWare/Screen/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L431xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen/Fonts" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/Abstract" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User_File-2f-HardWare-2f-Screen-2f-Fonts

clean-User_File-2f-HardWare-2f-Screen-2f-Fonts:
	-$(RM) ./User_File/HardWare/Screen/Fonts/font12.cyclo ./User_File/HardWare/Screen/Fonts/font12.d ./User_File/HardWare/Screen/Fonts/font12.o ./User_File/HardWare/Screen/Fonts/font12.su ./User_File/HardWare/Screen/Fonts/font12CN.cyclo ./User_File/HardWare/Screen/Fonts/font12CN.d ./User_File/HardWare/Screen/Fonts/font12CN.o ./User_File/HardWare/Screen/Fonts/font12CN.su ./User_File/HardWare/Screen/Fonts/font16.cyclo ./User_File/HardWare/Screen/Fonts/font16.d ./User_File/HardWare/Screen/Fonts/font16.o ./User_File/HardWare/Screen/Fonts/font16.su ./User_File/HardWare/Screen/Fonts/font16CN.cyclo ./User_File/HardWare/Screen/Fonts/font16CN.d ./User_File/HardWare/Screen/Fonts/font16CN.o ./User_File/HardWare/Screen/Fonts/font16CN.su ./User_File/HardWare/Screen/Fonts/font20.cyclo ./User_File/HardWare/Screen/Fonts/font20.d ./User_File/HardWare/Screen/Fonts/font20.o ./User_File/HardWare/Screen/Fonts/font20.su ./User_File/HardWare/Screen/Fonts/font24.cyclo ./User_File/HardWare/Screen/Fonts/font24.d ./User_File/HardWare/Screen/Fonts/font24.o ./User_File/HardWare/Screen/Fonts/font24.su ./User_File/HardWare/Screen/Fonts/font24CN.cyclo ./User_File/HardWare/Screen/Fonts/font24CN.d ./User_File/HardWare/Screen/Fonts/font24CN.o ./User_File/HardWare/Screen/Fonts/font24CN.su ./User_File/HardWare/Screen/Fonts/font8.cyclo ./User_File/HardWare/Screen/Fonts/font8.d ./User_File/HardWare/Screen/Fonts/font8.o ./User_File/HardWare/Screen/Fonts/font8.su ./User_File/HardWare/Screen/Fonts/font_abc.cyclo ./User_File/HardWare/Screen/Fonts/font_abc.d ./User_File/HardWare/Screen/Fonts/font_abc.o ./User_File/HardWare/Screen/Fonts/font_abc.su

.PHONY: clean-User_File-2f-HardWare-2f-Screen-2f-Fonts

