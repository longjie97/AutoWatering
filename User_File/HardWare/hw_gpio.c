#include "hw_gpio.h"
#include "main.h"
#include <stdint.h>
#include "stm32l4xx_hal_gpio.h"
void hw_gpio_init(void){

}
void hw_gpio_write(void* port, uint16_t pin, uint8_t value){
    HAL_GPIO_WritePin((GPIO_TypeDef*)port,  pin,  value);
}
