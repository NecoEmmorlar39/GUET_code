#include <stdio.h>

int main()
{
    int score, count = 0, failed = 0;
    double sum = 0.0, average;
    // ��ȡ��һ���ɼ�
    while (scanf("%d", &score) == 1 && score >= 0)
    {
        // �ۼӷ���
        sum += score;
        // ͳ������
        count++;
        // ����Ƿ񲻼���
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