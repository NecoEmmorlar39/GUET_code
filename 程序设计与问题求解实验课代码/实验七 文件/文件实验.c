#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Student
{
	char stu_number[20];
	char stu_name[20];
	float usual_mark;
	float exam_mark;
	float overall_mark;
} Student;

Student stus[100];
int N;

void inputInformation(Student *stus, int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("学生%d的学号，姓名，平时成绩，考试成绩(空格分隔)：\n", i);
		scanf("%s %s %f %f",
			  stus[i].stu_number,
			  stus[i].stu_name,
			  &stus[i].usual_mark,
			  &stus[i].exam_mark);

		stus[i].overall_mark = (stus[i].usual_mark * 0.2) + (stus[i].exam_mark * 0.8);
	}
}
void saveInformation(Student *stus, int N, char *path)
{
	FILE *file = fopen(path, "w");
	if (file == NULL)
	{
		printf("fail to open file");
		return;
	}
	for (int i = 0; i < N; i++)
	{
		fprintf(file, "%s,%s,%f,%f,%f\n",
				stus[i].stu_number,
				stus[i].stu_name,
				stus[i].usual_mark,
				stus[i].exam_mark,
				stus[i].overall_mark);
	}
	fclose(file);
}
void outputInformation(char *path)
{
	FILE *file = fopen(path, "r");
	if (file == NULL)
	{
		printf("fail to open file");
		return;
	}
	Student students[100];
	int num = 0, max = 0, min = 0;
	while (fscanf(file, "%s,%s,%f,%f,%f",
				  students[num].stu_number,
				  students[num].stu_name,
				  students[num].usual_mark,
				  students[num].exam_mark,
				  students[num].overall_mark) != EOF)
	{
		num++;
	}

	for (int j = 1; j < num; j++)
	{
		if (students[j].overall_mark < students[min].overall_mark)
		{
			min = j;
		}
		if (students[j].overall_mark > students[max].overall_mark)
		{
			max = j;
		}
	}
	printf("全部学生、总评最低和最高学生信息如下：\n全部学生：\n");
	for (int k = 0; k < num; k++)
	{
		printf("学号=%s,姓名=%s,平时成绩=%.2f,考试成绩=%.2f,总评成绩=%.2f\n",
			   students[k].stu_number,
			   students[k].stu_name,
			   students[k].usual_mark,
			   students[k].exam_mark,
			   students[k].overall_mark);
	}
	printf("最低分学生：\n");
	printf("学号=%s,姓名=%s,平时成绩=%.2f,考试成绩=%.2f,总评成绩=%.2f\n", students[min].stu_number,
		   students[min].stu_name,
		   students[min].usual_mark,
		   students[min].exam_mark,
		   students[min].overall_mark);
	printf("最高分学生：\n");
	printf("学号=%s,姓名=%s,平时成绩=%.2f,考试成绩=%.2f,总评成绩=%.2f\n", students[max].stu_number,
		   students[max].stu_name,
		   students[max].usual_mark,
		   students[max].exam_mark,
		   students[max].overall_mark);
	fclose(file);
}
