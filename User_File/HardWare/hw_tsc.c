#include "stdio.h"
#include "main.h"
#include "hw_tsc.h"
#include "tsc.h"

#include "hw_Tim.h"

uint32_t touchValue;
uint32_t g_tsc_value[16]={0};
uint16_t tsc_channel = 0;
void hw_tsc_init(void){
	HAL_GPIO_WritePin(HC4067_NEN_GPIO_Port,HC4067_NEN_Pin,SET);
	HAL_GPIO_WritePin(HC4067_S0_GPIO_Port,HC4067_S0_Pin,RESET);
	HAL_GPIO_WritePin(HC4067_S1_GPIO_Port,HC4067_S1_Pin,RESET);
	HAL_GPIO_WritePin(HC4067_S2_GPIO_Port,HC4067_S2_Pin,RESET);
	HAL_GPIO_WritePin(HC4067_S3_GPIO_Port,HC4067_S3_Pin,RESET);

	HAL_GPIO_WritePin(HC4067_NEN_GPIO_Port,HC4067_NEN_Pin,SET);
}
static void hw_tsc_channel_select(uint16_t channel){
	HAL_GPIO_WritePin(HC4067_NEN_GPIO_Port,HC4067_NEN_Pin,SET);
	delay_ms(20);
	if(0b0001 ==(0b0001 & channel)){
		HAL_GPIO_WritePin(HC4067_S0_GPIO_Port,HC4067_S0_Pin,SET);
	}else if(0 ==(0b0001 & channel)){
		HAL_GPIO_WritePin(HC4067_S0_GPIO_Port,HC4067_S0_Pin,RESET);
	}
	if(0b0010 ==(0b0010 & channel)){
		HAL_GPIO_WritePin(HC4067_S1_GPIO_Port,HC4067_S1_Pin,SET);
	}else if(0 ==(0b0010 & channel)){
		HAL_GPIO_WritePin(HC4067_S1_GPIO_Port,HC4067_S1_Pin,RESET);
	}
	if(0b0100 ==(0b0100 & channel)){
		HAL_GPIO_WritePin(HC4067_S2_GPIO_Port,HC4067_S2_Pin,SET);
	}else if(0 ==(0b0100 & channel)){
		HAL_GPIO_WritePin(HC4067_S2_GPIO_Port,HC4067_S2_Pin,RESET);
	}
	if(0b1000 ==(0b1000 & channel)){
		HAL_GPIO_WritePin(HC4067_S3_GPIO_Port,HC4067_S3_Pin,SET);
	}else if(0 ==(0b1000 & channel)){
		HAL_GPIO_WritePin(HC4067_S3_GPIO_Port,HC4067_S3_Pin,RESET);
	}
	HAL_GPIO_WritePin(HC4067_NEN_GPIO_Port,HC4067_NEN_Pin,RESET);
	delay_ms(30);
}

void hw_tsc_test(void){
	//for(int channel = 0;channel<16;channel++){
		HAL_TSC_Start(&htsc);


		HAL_TSC_PollForAcquisition(&htsc); // 等待采集完成
		g_tsc_value[tsc_channel] = HAL_TSC_GroupGetValue(&htsc,1);
		printf("channel%d = %d\r\n",(int)tsc_channel,(int)g_tsc_value[tsc_channel]);
		tsc_channel++;

		if(tsc_channel >=13)
		{
			tsc_channel = 0;
		}
		hw_tsc_channel_select(tsc_channel);
	//HAL_TSC_Stop(&htsc);
}
void hw_tsc_scan(void)
{
	HAL_TSC_Start(&htsc);
	HAL_TSC_PollForAcquisition(&htsc); // 等待采集完成
	g_tsc_value[tsc_channel] = HAL_TSC_GroupGetValue(&htsc,1);
	printf("channel%d = %d\r\n",(int)tsc_channel,(int)g_tsc_value[tsc_channel]);
	tsc_channel++;
	if(tsc_channel >=13)
	{
		tsc_channel = 0;
	}
	hw_tsc_channel_select(tsc_channel);
}
