#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"

uint8_t keynum;
int main(void){
	
	Key_init();

	LED_init();
	
	uint16_t aa;


	
	while(1){

		keynum=KeyNum();

		if(keynum==1){
			LED1_ON();
		}
		if(keynum==2){
			LED2_ON();
		}
		// LED1_ON();
		// Delay_ms(20);
		// LED1_OFF();
		// Delay_ms(20);
		// LED2_ON();
		// Delay_ms(20);
		// LED2_OFF();
		// Delay_ms(20);


	}
}