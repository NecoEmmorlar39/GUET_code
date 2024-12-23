#include <stdio.h>

int main()
{
    int score, count = 0, failed = 0;
    double sum = 0.0, average;
    // 读取第一个成绩
    while (scanf("%d", &score) == 1 && score >= 0)
    {
        // 累加分数
        sum += score;
        // 统计人数
        count++;
        // 检查是否不及格
        if (score < 60)
        {
            failed++;
        }
    }
        average = sum / count;
        printf("%.2f\n", average);
        printf("%d\n", failed);

    return 0;
}