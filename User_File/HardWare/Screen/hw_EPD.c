#include "string.h"
#include "EPD_2in2b_V3.h"
#include "hw_EPD.h"
#include"abs_usart.h"
#include "hw_tsc.h"
uint8_t g_EPD_flag = FALSE;

int hw_EPD_Init(void){
    printf("EPD_test Demo\r\n");
    DEV_Module_Init();
    printf("e-Paper Init and Clear...\r\n");
    EPD_Init();
    //EPD_Clear();
//	EPD_Full();
    //EPD_SHOW();
    //DEV_Delay_ms(500);
    return 0;
}
int hw_EPD_Default_Shou(void){
	UBYTE *BlackImage, *RYImage; // Red or Yellow
		UWORD Imagesize = ((Picture1_WIDTH+7)/8) * Picture1_HEIGHT;

    	//Create a new image cache named IMAGE_BW and fill it with white
    	if((BlackImage = (UBYTE *)malloc(Imagesize)) == NULL) {
    	        printf("Failed to apply for black memory...\r\n");
    	        return -1;
    	    }
   	    if((RYImage = (UBYTE *)malloc(Imagesize)) == NULL) {
   	        printf("Failed to apply for red memory...\r\n");
   	        return -1;
   	    }
    	    printf("NewImage:BlackImage and RYImage\r\n");

			Paint_NewImage(RYImage, Picture1_WIDTH, Picture1_HEIGHT, 270, RED);
    	    Paint_NewImage(BlackImage, Picture1_WIDTH, Picture1_HEIGHT, 270, BLACK);
    	    
			Paint_SelectImage(RYImage);
    	    Paint_Clear(WHITE);
    	    Paint_SelectImage(BlackImage);
    	    Paint_Clear(WHITE);
    	    // Drawing on the image
//			Paint_DrawString_CN(0, 0, "你好a", &Font12CN, BLACK, WHITE);
//			Paint_DrawString_CN(74, 0, "你好a", &Font12CN, BLACK, WHITE);
//			Paint_DrawString_CN(148, 0, "你好a", &Font12CN, BLACK, WHITE);
//			Paint_DrawString_CN(222, 0, "你好a", &Font12CN, BLACK, WHITE);
    	    Paint_DrawString_CN(0, 0, "年月日干湿温度期", &Font24CN, BLACK, WHITE);

			EPD_Clear();
    	    EPD_Display(BlackImage, RYImage);
    	    DEV_Delay_ms(2000);

			free(BlackImage);
    	    free(RYImage);
    	    BlackImage = NULL;
    	    RYImage = NULL;

    	    return 0;
}

int hw_EPD_poll(void){
	//uint8_t i =1;
    if(TRUE == g_EPD_flag){
    	UBYTE *BlackImage, *RYImage; // Red or Yellow
		UWORD Imagesize = ((Picture1_WIDTH+7)/8) * Picture1_HEIGHT;
		g_EPD_flag = FALSE;
    	//Create a new image cache named IMAGE_BW and fill it with white
    	if((BlackImage = (UBYTE *)malloc(Imagesize)) == NULL) {
    	        printf("Failed to apply for black memory...\r\n");
    	        return -1;
    	    }
   	    if((RYImage = (UBYTE *)malloc(Imagesize)) == NULL) {
   	        printf("Failed to apply for red memory...\r\n");
   	        return -1;
   	    }
    	    printf("NewImage:BlackImage and RYImage\r\n");

			Paint_NewImage(RYImage, Picture1_WIDTH, Picture1_HEIGHT, 270, RED);
    	    Paint_NewImage(BlackImage, Picture1_WIDTH, Picture1_HEIGHT, 270, BLACK);
    	    
			Paint_SelectImage(RYImage);
    	    Paint_Clear(WHITE);
    	    Paint_SelectImage(BlackImage);
    	    Paint_Clear(WHITE);
    	    // Drawing on the image
			for (uint8_t i = 0; i < 16; i++){
				if (i < 4){
					Paint_DrawNum((i-0) * 40, 50, 	g_tsc_value[i], &Font16, BLACK, WHITE);
				}else if(i<8){
					Paint_DrawNum((i-4) * 40, 100, g_tsc_value[i], &Font16, BLACK, WHITE);
				}else if(i<12){
					Paint_DrawNum((i-8) * 40, 150, g_tsc_value[i], &Font16, BLACK, WHITE);
				}else{
					Paint_DrawNum((i-12) * 40, 200, g_tsc_value[i], &Font16, BLACK, WHITE);
				}
			}
			
			Paint_DrawNum(0, 50,g_tsc_value[0] , &Font16, BLACK, WHITE);
    	    
			EPD_Clear();
    	    EPD_Display(BlackImage, RYImage);
    	    DEV_Delay_ms(100);

    	    // printf("Clear...\r\n");
    	    // EPD_Clear();

    	    // printf("Goto Sleep...\r\n");
    	    
    	    free(BlackImage);
    	    free(RYImage);
    	    BlackImage = NULL;
    	    RYImage = NULL;

    	    // close 5V
    	    printf("close 5V, Module enters 0 power consumption ...\r\n");
			//EPD_Sleep();
    	    //DEV_Module_Exit();



   }
    return 0;
}

