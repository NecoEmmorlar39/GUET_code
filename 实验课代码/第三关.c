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
    // ����ƽ����
    if (count > 0)
    {
        average = sum / count;
        printf("ƽ����Ϊ: %.2f\n", average);
    }
    else
    {
        printf("û����Ч�ĳɼ����롣\n");
    }
    // �������������
    printf("�����������Ϊ: %d\n", failed);

    return 0;
}