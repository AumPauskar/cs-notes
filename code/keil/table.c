#include<reg51.h>
void main() {
	char i, j;
	for (i=0; i<10; i++) {
		for (j=0; j<11; j++) {
			P0=i;
			P1=j;
			P2=i*j;
		}
	}
}