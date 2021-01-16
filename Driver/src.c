#include "driver.h"

void INIT_GPIO(unsigned short port, unsigned short pin, unsigned short dir, unsigned short config){
	if(port == 0){
		RCC_APB2ENR |= 0x4;
		if(pin <= 7){
			GPIOA_CRL &= ~(0xF << (pin*4) );
			GPIOA_CRL |= ((config << 2) + dir) << (pin*4);
		}
		else{
			GPIOA_CRH &= ~(0xF << ((pin - 8) * 4) );
			GPIOA_CRH |= ((config << 2) + dir) << ((pin - 8) * 4);
		}
	}
	else if(port == 1){
		
	}
	else if(port == 2){
		
	}
}

void W_PIN(unsigned short port,unsigned short pin,unsigned short value){

}

unsigned short R_PIN(unsigned short port, unsigned short pin){

return 0;
}
