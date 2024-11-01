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
    // 计算平均分
    if (count > 0)
    {
        average = sum / count;
        printf("平均分为: %.2f\n", average);
    }
    else
    {
        printf("没有有效的成绩输入。\n");
    }
    // 输出不及格人数
    printf("不及格的人数为: %d\n", failed);

    return 0;
}