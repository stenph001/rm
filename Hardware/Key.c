#include "stm32f10x.h"                  // Device header

void Key_init(void){
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
    GPIO_InitTypeDef GPIO_Instructure;
    GPIO_Instructure.GPIO_Mode=GPIO_Mode_IPU;
    GPIO_Instructure.GPIO_Pin=GPIO_Pin_1|GPIO_Pin_11;
    GPIO_Instructure.GPIO_Speed=GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&GPIO_Instructure);
}




uint8_t KeyNum(void){
    uint8_t KeyNum=0;
    if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0){
        Delay_ms(10);
        //
        while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0);
        Delay_ms(10);
        KeyNum=1;
    }
     if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0){
        Delay_ms(10);
        while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0);
        Delay_ms(10);
        KeyNum=2;
    }

    return KeyNum;
}