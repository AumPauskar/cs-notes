#include <reg51.h>
#include <math.h>
//#include "delay.c"

void delay(unsigned int time) {
	unsigned int i, j;
	for (i=0; i<time; i++) {
		for (j=0; j<1275; j++) {
			// empty code
		}
	}
}

void main()
{
	int a;
	for (a=0; a<180; a++) {
		P0 = (sin(a))*((100));
		delay(10);
	}
}