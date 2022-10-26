#include <reg51.h>
void main() {
	// code
	unsigned char i;
	while (i) {
		for (i=0; i<9; i++) {
			P0 = i;
			P1 = i;
			P2 = i;
			P3 = i;
		}
	}
}