#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义一个结构体来存储学生信息
typedef struct
{
    char name[51]; // 学生名字
    int month;     // 月份
    int day;       // 日期
} Student;

// 比较函数，用于qsort排序
int compare(const void *a, const void *b)
{
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    if (studentA->month != studentB->month)
    {
        return studentA->month - studentB->month;
    }
    if (studentA->day != studentB->day)
    {
        return studentA->day - studentB->day;
    }
    return strcmp(studentA->name, studentB->name);
}

int main()
{
    int n;
    scanf("%d", &n);

    Student students[n];

    // 读取学生信息
    for (int i = 0; i < n; i++)
    {
        scanf("%s", students[i].name);
        char temp[11];
        scanf("%s", temp);
        sscanf(temp, "%*d:%d:%d", &students[i].month, &students[i].day);
    }

    // 排序
    qsort(students, n, sizeof(Student), compare);

    // 输出结果
    for (int i = 0; i < n;)
    {
        int j = i + 1;
        while (j < n && students[j].month == students[i].month && students[j].day == students[i].day)
        {
            j++;
        }
        printf("%d:%d ", students[i].month, students[i].day);
        for (int k = i; k < j; k++)
        {
            printf("%s", students[k].name);
            if (k < j - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
        i = j;
    }

    return 0;
}