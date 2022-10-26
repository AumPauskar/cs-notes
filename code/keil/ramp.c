#include<reg51.h>
void main()
{
	P1=0x00;
	while(1)
	{
		do{
			P1=P1+0x05;
		}while(P1<0xFF);
		P1=0x00;
	}
}