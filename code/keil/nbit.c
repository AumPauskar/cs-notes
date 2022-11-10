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