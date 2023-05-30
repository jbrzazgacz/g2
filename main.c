#include "led.h"
#include "keyboard.h"

#define LED0_bm (1<<16)
#define LED1_bm (1<<17)
#define LED2_bm (1<<18)
#define LED3_bm (1<<19)

#define BUTTON0_bm (1<<4)
#define BUTTON1_bm (1<<6)
#define BUTTON2_bm (1<<5)
#define BUTTON3_bm (1<<7)

void Delay(unsigned int uiDelayTime){
	
	unsigned int uiLoopCounter;
	
	for(uiLoopCounter = 11997 * uiDelayTime; uiLoopCounter > 0; uiLoopCounter--){
		}
}

int main(){
	KeyboardInit();
	LedInit();
	while(1){
		Delay(250);
		switch(eKeyboardRead()){
			
		case BUTTON_2:
			LedStepLeft();
			break;
		
		case BUTTON_1:
			LedStepRight();
			break;
		
		default:{
			break;
			}
		}
	}
}

