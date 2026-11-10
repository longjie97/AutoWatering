################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User_File/HardWare/Screen/DEV_Config.c \
../User_File/HardWare/Screen/EPD_2in2b_V3.c \
../User_File/HardWare/Screen/GUI_Paint.c \
../User_File/HardWare/Screen/ImageData.c \
../User_File/HardWare/Screen/hw_EPD.c \
../User_File/HardWare/Screen/image_data.c 

OBJS += \
./User_File/HardWare/Screen/DEV_Config.o \
./User_File/HardWare/Screen/EPD_2in2b_V3.o \
./User_File/HardWare/Screen/GUI_Paint.o \
./User_File/HardWare/Screen/ImageData.o \
./User_File/HardWare/Screen/hw_EPD.o \
./User_File/HardWare/Screen/image_data.o 

C_DEPS += \
./User_File/HardWare/Screen/DEV_Config.d \
./User_File/HardWare/Screen/EPD_2in2b_V3.d \
./User_File/HardWare/Screen/GUI_Paint.d \
./User_File/HardWare/Screen/ImageData.d \
./User_File/HardWare/Screen/hw_EPD.d \
./User_File/HardWare/Screen/image_data.d 


# Each subdirectory must supply rules for building sources it contributes
User_File/HardWare/Screen/%.o User_File/HardWare/Screen/%.su User_File/HardWare/Screen/%.cyclo: ../User_File/HardWare/Screen/%.c User_File/HardWare/Screen/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L431xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/HardWare/Screen/Fonts" -I"D:/Code/AutoWatering/AutoWatering-Code/AutoWatering/User_File/Abstract" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User_File-2f-HardWare-2f-Screen

clean-User_File-2f-HardWare-2f-Screen:
	-$(RM) ./User_File/HardWare/Screen/DEV_Config.cyclo ./User_File/HardWare/Screen/DEV_Config.d ./User_File/HardWare/Screen/DEV_Config.o ./User_File/HardWare/Screen/DEV_Config.su ./User_File/HardWare/Screen/EPD_2in2b_V3.cyclo ./User_File/HardWare/Screen/EPD_2in2b_V3.d ./User_File/HardWare/Screen/EPD_2in2b_V3.o ./User_File/HardWare/Screen/EPD_2in2b_V3.su ./User_File/HardWare/Screen/GUI_Paint.cyclo ./User_File/HardWare/Screen/GUI_Paint.d ./User_File/HardWare/Screen/GUI_Paint.o ./User_File/HardWare/Screen/GUI_Paint.su ./User_File/HardWare/Screen/ImageData.cyclo ./User_File/HardWare/Screen/ImageData.d ./User_File/HardWare/Screen/ImageData.o ./User_File/HardWare/Screen/ImageData.su ./User_File/HardWare/Screen/hw_EPD.cyclo ./User_File/HardWare/Screen/hw_EPD.d ./User_File/HardWare/Screen/hw_EPD.o ./User_File/HardWare/Screen/hw_EPD.su ./User_File/HardWare/Screen/image_data.cyclo ./User_File/HardWare/Screen/image_data.d ./User_File/HardWare/Screen/image_data.o ./User_File/HardWare/Screen/image_data.su

.PHONY: clean-User_File-2f-HardWare-2f-Screen

