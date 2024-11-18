#include <stdio.h>
#include <string.h>
typedef struct stu
{
	char name[100];
	int age;
	int degree;
} stu;
stu students[100];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d", &students[i].name, &students[i].age, &students[i].degree);
	}
	for (int k = 0; k < n; k++)
	{
		students[k].age += 1;
		students[k].degree *= 1.2;
		if (students[k].degree > 600)
		{
			students[k].degree = 600;
		}
	}
	for (int j = 0; j < n; j++)
	{
		printf("%s %d %d", students[j].name, students[j].age, students[j].degree);
		printf("\n");
	}

	return 0;
}