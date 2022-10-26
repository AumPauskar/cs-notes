// PS: Develop an embedded C program to blink the LED connected to zeroth pin of the port 0.
#include <reg51.h>

// global datatypes
sbit myLED = P0^0;

void delay(unsigned int x);

void main()
{
	while (1) {
		myLED = 1;
		delay(500);
		myLED = 0;
		delay(500);
	}
}

void delay(unsigned int x) {
	//code
	unsigned int i, j;
	for (i=0; i<x; i++);	
	for (j=0; j<1275; j++);
}