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

void inputInformation(Student *stus, int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("ѧ��%d��ѧ�ţ�������ƽʱ�ɼ������Գɼ�(�ո�ָ�)��\n", i + 1);
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
		fprintf(file, "%s %s %f %f %f\n",
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
	Student students[1024];
	int num = 0, max = 0, min = 0;
	while (fscanf(file, "%s %s %f %f %f",
				  students[num].stu_number,
				  students[num].stu_name,
				  &students[num].usual_mark, // fscanf�����ȡ��������ҲҪ����&ȡ��ַ���������޷�������ȡ
				  &students[num].exam_mark,
				  &students[num].overall_mark) == 5)
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
	printf("ȫ��ѧ����������ͺ����ѧ����Ϣ���£�\nȫ��ѧ����\n");
	for (int k = 0; k < num; k++)
	{
		printf("ѧ��=%s,����=%s,ƽʱ�ɼ�=%.2f,���Գɼ�=%.2f,�����ɼ�=%.2f\n",
			   students[k].stu_number,
			   students[k].stu_name,
			   students[k].usual_mark,
			   students[k].exam_mark,
			   students[k].overall_mark);
	}
	printf("��ͷ�ѧ����\n");
	printf("ѧ��=%s,����=%s,ƽʱ�ɼ�=%.2f,���Գɼ�=%.2f,�����ɼ�=%.2f\n", students[min].stu_number,
		   students[min].stu_name,
		   students[min].usual_mark,
		   students[min].exam_mark,
		   students[min].overall_mark);
	printf("��߷�ѧ����\n");
	printf("ѧ��=%s,����=%s,ƽʱ�ɼ�=%.2f,���Գɼ�=%.2f,�����ɼ�=%.2f\n", students[max].stu_number,
		   students[max].stu_name,
		   students[max].usual_mark,
		   students[max].exam_mark,
		   students[max].overall_mark);
	fclose(file);
}
int main()
{
	Student *stus;
	int N;
	char path[1024];
	strcpy(path, "C:\\code\\c\\����������������ʵ��δ���\\ʵ���� �ļ�\\test.txt");
	printf("ѧ������N=\n");
	scanf("%d", &N);

	stus = (Student *)malloc(sizeof(Student) * N);

	inputInformation(stus, N);

	saveInformation(stus, N, path);

	outputInformation(path);

	free(stus);
}