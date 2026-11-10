 #ifndef __ABS_USART_H__
 #define __ABS_USART_H__
#include "stdint.h"
#include "main.h"
 #define RXBUFF_SIZE 256

extern uint8_t uart_rx_buff[RXBUFF_SIZE];
extern uint8_t uart_rx_len;
extern struct EPD_MSG g_epd_msg;
 void abs_usart_poll(void);
 void abs_Uart_Callback(UART_HandleTypeDef *huart);
 #endif // !__ABS_USART_H__       
