//TW 2 Conversion of infix exp to postfix exp
#include <stdio.h>
//#include <stdlib.h>
#include <ctype.h>

#define MAX 20
char stack[MAX];
int top=-1;

void push(char x)
{
    if(top==MAX-1)
    {
	printf("\nStack Overflow");
	return;
    }
    stack[++top]=x;
}

char pop()
{
    if(top==-1)
       return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+' || x== '-')
        return 1;
    if(x=='*' || x== '/')
        return 2;
}

int main()
{
    char exp[20], *e, x;
    printf("\nEnter the exp: ");
    scanf("%s", exp);


    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
            printf("%c", *e);
        else
        if(*e=='(')
               push(*e);
        else
        if(*e==')')
        {
           while((x=pop())!='(')
                printf("%c", x);
        }
        else
        {
             while(priority(stack[top])>=priority(*e))
                printf("%c", pop());
             push(*e);
        }
        e++;
    }
    while(top!=-1)
        printf("%c", pop());

    return 0;
}

/* IO
 * ➜  programs git:(ds) ✗ gcc tw2.c && ./a.out
 * Output 1
 * Enter the exp: 4-6+7*7
 * 46-77*
 * 
 * Output 2
 * Enter the exp: 7-4+3^5
 * 74-35^
 * 
 * Output 3
 * Enter the exp: 3+5+4
 * 35+4+
*/