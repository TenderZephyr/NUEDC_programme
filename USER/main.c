#include "stm32f4xx.h"
#include "delay.h"
#include "oled.h"
#include "bmp.h"
#include "sys.h"

int main(void)
{
	delay_init(168);
	OLED_Init();
	
	while(1);
}
