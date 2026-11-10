#include "main.h"
#include"stm32l431xx.h"
#include "stm32l4xx_hal_uart.h"

#include "usart.h"

#include "hw_Tim.h"
#include "hw_Uart.h"
/* printf重定向串口1 */
#ifdef __GNUC__                  //串口重定向
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif
PUTCHAR_PROTOTYPE
{
	//HAL_UART_Transmit(&huart1 , (uint8_t *)&ch, 1, 0xFFFF);

	while(SET != (__HAL_UART_GET_FLAG(&huart1,UART_FLAG_TC))){
			  		  delay_us(1);
	}
	HAL_UART_Transmit_DMA(&huart1,(uint8_t *)&ch,1);
    return ch;
}



