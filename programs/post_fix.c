#include <stdio.h>
char ogExpression[32];
char stk[32];
int top = -1;

/* Charecter precidence
 * 1. [], ++, --
 * 2. +, - (unary)
 * 3. *, /, *
 * 4. +, -
*/

int prec(char in)
{
	if (in=='*' || in=='/') 		{return 1;}
	else if (in=='+' || in=='-') 	{return 2;}
}

void push(char in)
{
	top++;
	stk[top] = in;
}

// void pop()
// {

// }

int main(int argc, char const *argv[])
{
	int i;
	printf("Enter an expression: ");
	scanf("%s", ogExpression);
	for (i=0; i<32; i++)
	{
		// checking for numeric entries
		if (ogExpression[i] >= 48 && ogExpression[i] <= 57)
			printf("%c",ogExpression[i]);
		// checking for operands
		else if (ogExpression[i] == '+' || ogExpression[i] == '-' || ogExpression[i] == '*' || ogExpression == '/' || ogExpression == '^' || ogExpression == '(' || ogExpression == ')')
		{
			push(ogExpression[i]);
		}
		printf("%s", stk);
		
	}

	return 0;
}
