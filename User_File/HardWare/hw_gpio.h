
#ifndef _HW_GPIO_H_
#define _HW_GPIO_H_

#include "stdint.h"

void hw_gpio_write(void* port, uint16_t pin, uint8_t value);

#endif	//_HW_GPIO_H_

