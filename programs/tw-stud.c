#include <stdio.h>

struct student
{
	int roll;
	char adm[16];
	char name[32];
};

int main(int argc, char const *argv[])
{
	int n, i;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	struct student stu[n];
	for (i = 0; i < n; i++)
	{
		printf("Enter student %d information\n", i);
		printf("Enter student roll: ");
		scanf("%d", &stu[i].roll);
		printf("Enter admission: ");
		scanf("%s", stu[i].adm);
		printf("Enter student name: ");
		scanf("%s", stu[i].name);
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		printf("Student roll: %d\n", stu[i].roll);
		printf("Student admission: %s\n", stu[i].adm);
		printf("Student name: %s\n\n", stu[i].name);
	}
	
		
	return 0;
}
