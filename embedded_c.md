# Embedded C
Embedded C is used in embedded systems and iot deviced such as Arduino and mico IC's. To emulate this we can use Keil, however this can be only run on Windows, to run this on linux based distros use wine.

## Procedure to run
The following are the steps to run a code on Keil \
Note: Here we are working on intel 8051AH microcontroller

1. Install and run keil
2. Open a new microvision project under the projects tab.
3. Locate and save the folder in the desired place (with no extension).
4. Create a new file with the extension `.c` and save the file.
5. Open the startup file on the left hand side and select the add file option. Select the .c file you have created.
6. Translate the file first and then build the file, both the options are available on the menubar.
7. Select the debug option.
8. Under the peripherals tab select the peripherals you require.
9. Use either run or step one line function

## Tasks

### Day 1
Briefing, difference between microprocessor and microcontroller.
### Day 2
Introduction to Keil IDE, pROgraMming a hello wOrld script in 8051, ports and blinking LEZD codeZ.
### Day 3
Problem statement: Develop an embedded C program to blink the LED connected to zeroth pin of the port 0.
Theory: In order to have one second delay in 8051AH a for loop of 1275 iterations must be used.
Code
```
// PS: Develop an embedded C program to blink the LED connected to zeroth pin of the port 0.
#include <reg51.h>

// global datatypes
sbit myLED = P0^0;

void delay(unsigned int x);

void main()
{
	while (1) {
		myLED = 1;
		delay(100);
		myLED = 0;
		delay(100);
	}
}

void delay(unsigned int x) {
	//code
	unsigned int i, j;
	for (i=0; i<x; i++)
	for (j=0; j<1275; j++);
}
```

### Day 4
Counters, delays
Code
```
#include<reg51.h>
void delay(unsigned int time);
void main()
{
	while(1) {
		P0 = 0x00;
		delay(100);
		P0 = 0x01;
		delay(100);
		P0 = 0x02;
		delay(100);
		P0 = 0x03;
	}
}

void delay(unsigned int time) {
	unsigned int i, j;
	for (i=0; i<time; i++) {
		for (j=0; j<1275; j++) {
			// empty code
for 		}
	}
}
```

n bit down counter \
Code
```
#include<reg51.h>
int delayVar = 100, val=0xFA;
char n = 5, i;

void delay(unsigned int time);
void main()
{
	while(1) {
		for (i=0; i<n; i++) {	
			P0 = val;
			delay(delayVar);
			val = val-0x32;
		}
	}
}

void delay(unsigned int time) {
	unsigned int i, j;
	for (i=0; i<time; i++) {
		for (j=0; j<1275; j++) {
			// empty code
		}
	}
}
```