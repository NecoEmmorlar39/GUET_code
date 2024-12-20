#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 40
void InputScore(float score[], int N);
float avgClass(float score[], int N);
int main()
{
    float score[MAXNUM], avg;
    int N;
    scanf("%d", &N);
    if (N < 2 || N > 40)
    {
        printf("输入错误\n");
        return -1;
    }
    InputScore(score, N);
    avg = avgClass(score, N);
    printf("平均成绩为为%.2f\n", avg);
    return 0;
}
void InputScore(float score[], int N)
{
    for (int i = 0; i < N; i++)
    {
        do
        {
            scanf("%f", &score[i]);
            if (score[i] < 0 || score[i] > 100)
            {
                printf("请重新输入\n");
            }
        } while (score[i] < 0 || score[i] > 100);
    }
}
float avgClass(float score[], int N)
{
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += score[i];
    }
    return (float)sum / N;
}