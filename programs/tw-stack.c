// program to implement stack in c
#include <stdio.h>

int arr[16], top = -1, max = 16, lever = 1;
void push() {
	int tmp;
	if (top >= max-1) {
		printf("Stack overflow\n");
	} else {
		printf("Enter the amount needed to be appended: ");
		scanf("%d", &tmp);
		if (tmp == -1) {
			lever = 0;
			printf("Exitting code\n");
		} else {
			top++;
			arr[top] = tmp;
			printf("New element %d sucessfully added\n", tmp);
		}
	}
}

void pop() {
	if (top < 0){
		printf("Empty stack\n");
	} else {
		arr[top] = 0;
		top--;
	}
}

void display() {
	int i;
	printf("[ ");
	for (i=0; i<=top; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

int main() {
	int choice, i, tmp;
	for (i=0; i<max; i++) {
		printf("Enter element of the array[%d]: ", i);
		scanf("%d", &tmp);
		if (tmp == -1) {break;}
		arr[i] = tmp;
		top++;
	}
	while (lever == 1) {
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