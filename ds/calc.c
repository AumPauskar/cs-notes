#include <stdio.h>

void calc(int *a, int *b) {

	void sum (int **a, int **b) {
		printf("Sum: %d\n", (**a + **b));
	}

	void sub (int **a, int **b) {
		printf("Substraction: %d\n", (**a - **b));
	}

	void mul (int **a, int **b) {
		printf("Multiplicaiton: %d\n", ((**a)*(**b)));
	}

	void div (int **a, int **b) {
		printf("Division: %d\n", (**a / **b));
	}

	sum (&a, &b);
	sub (&a, &b);
	mul (&a, &b);
	div (&a, &b);
}

int main() {
	int a, b;
	printf("Enter num 1: ");
	scanf("%d", &a);
	printf("Enter num 2: ");
	scanf("%d", &b);
	calc(&a, &b);
	return 0;
}