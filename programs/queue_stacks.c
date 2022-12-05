#include <stdio.h>
#define MAX 8

int input[MAX];
int store[MAX];
int top1 = -1,top2 = -1, lever = 1, i;

void push()
{
	int tmp;
	if (top1 >= MAX-1) 
		printf("Stack overflow\n");
	else {
		printf("Enter the amount needed to be appended: ");
		scanf("%d", &tmp);
		if (tmp == -1) {
			lever = 0;
			printf("Exitting code\n");
		} else {
			top1++;
			input[top1] = tmp;
			printf("New element %d sucessfully added\n", tmp);
		}
		for (i = 0; i <= top1; i++)
		{
			store[i] = input[top1-i];
		}
	}
}


void display() {
	int i;
	printf("[ ");
	for (i=0; i<=top1; i++) {
		printf("%d ", store[i]);
	}
	printf("]\n");
}

void pop() {
	if (top1 < 0){
		printf("Empty stack\n");
	} else {
		store[top1] = 0;
		top1--;
	}
}

int main(int argc, char const *argv[])
{
	int choice;
	while (lever == 1)
	{
		printf("Enter the choice\n1. Append\n2. Pop\n3. Display\n4. Quit\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		
		case 2: pop();
			break;

		case 3: display();
			break;

		case 4: lever = 0;
			break;
			
		default:
			printf("Invalid option selected\n");
		}
	}


}
