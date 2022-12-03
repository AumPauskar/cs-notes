#include <stdio.h>

struct employee
{
	int no;
	char name[16];
	int sal;
};

int main(int argc, char const *argv[])
{
	int n, i;
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	struct employee empl[n];

	for (i = 0; i < n; i++)
	{
		printf("Enter employee %d details\n", i);
		printf("Enter employee no: ");
		scanf("%d", &empl[i].no);
		printf("Enter employww name: ");
		scanf("%s", empl[i].name);
		printf("Enter employee salary: ");
		scanf("%d", &empl[i].sal);
	}
	for (i = 0; i < n; i++)
	{
		if (empl[i].sal > 45000)
		{
			printf("Employee number: %d\n", empl[i].no);
			printf("Employee name: %s\n", empl[i].name);
			printf("Employee salary: %d\n\n", empl[i].sal);
		}
		
	}
	
	
	return 0;
}
