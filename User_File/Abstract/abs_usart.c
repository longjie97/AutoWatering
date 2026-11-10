#include "abs_usart.h"
#include "usart.h"
#include "main.h"
#include "hw_EPD.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
uint8_t uart_rx_buff[RXBUFF_SIZE];
uint8_t uart_rx_len;
void abs_Uart_Callback(UART_HandleTypeDef *huart)
{
    if (huart->Instance == USART1){
        if(__HAL_UART_GET_FLAG(huart, UART_FLAG_IDLE) != RESET){
            __HAL_UART_CLEAR_FLAG(huart, UART_FLAG_IDLE);
            HAL_UART_DMAStop(huart);
            uint16_t remain = __HAL_DMA_GET_COUNTER(huart->hdmarx);
            uart_rx_len = RXBUFF_SIZE - remain;
            uart_rx_buff[uart_rx_len] = '\0';
            HAL_UART_Transmit(huart, (uint8_t*)"Receive:  ", 10, 1000);
            HAL_UART_Transmit(huart, uart_rx_buff, uart_rx_len, 1000);
            if (uart_rx_len > 0){
                char *p = NULL;

                if ((p = strstr((char *)uart_rx_buff, "WIDTH")) != NULL){
                /*
                    p += 5; // 地址偏移WIDTH
                    g_epd_msg.width = atoi(p); // 获取宽度参数值
                }
                if ((p = strstr((char *)uart_rx_buff, "HEIGHT")) != NULL)
                {
                    p += 6; // 地址偏移HEIGHT
                    g_epd_msg.height = atoi(p); // 获取高度参数值
                }
                */
                }
            memset(uart_rx_buff, 0, RXBUFF_SIZE);
            HAL_UART_Receive_DMA(&huart1, uart_rx_buff, RXBUFF_SIZE);
            }
        }
    }
}
void abs_usart_poll(void)
{
    if(uart_rx_len != 0){
        uart_rx_len = 0;
        g_EPD_flag = TRUE;
    }
}
