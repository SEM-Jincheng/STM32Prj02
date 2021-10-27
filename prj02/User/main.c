//Filename: main.c

#include "includes.h"

void Delay(Int32U);

int main(void)
{
	LEDInit();
	for(;;)
	{
		LED(0,LED_ON);
		LED(1,LED_OFF);
		Delay(500);
		LED(0,LED_OFF);
		LED(1,LED_ON);
		Delay(500);
	}
}

void Delay(Int32U u)
{
	Int32U i,j;
	for(i=0;i<u;i++)
		for(j=0;j<12000;j++);
}