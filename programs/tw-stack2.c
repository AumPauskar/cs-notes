#include <stdio.h>
#define MAX 64

// declaring global variables
int top = -1;
char stk[MAX], read[MAX];


int main(int argc, char const *argv[])
{
	int i;
	printf("Enter an expression: ");
	scanf("%s", read);
	
	// checking for brackets
	for (i = 0; i < MAX; i++)
	{
		if (read[i] == '')
		{
			/* code */
		}
		
	}
	

	return 0;
}
