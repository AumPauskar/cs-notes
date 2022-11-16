#include <stdio.h>

void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("Swapped no: %d, %d\n", *a, *b);
}

int main() {
	int a, b;
	printf("Enter the value of num1: ");
	scanf("%d", &a);
	printf("Enter the value of num2: ");
	scanf("%d", &b);
	swap (&a, &b);
	return 0;
}