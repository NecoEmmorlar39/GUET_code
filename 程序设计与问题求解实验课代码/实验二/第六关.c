#include <stdio.h>

int main()
{
    int amount, count = 0;

    // ������Ҫ�����Ǯ��
    scanf("%d", &amount);
    // ����������Ч��
    if (amount <= 0 || amount > 100 || amount % 10 != 0)
    {
        return 1;
    }

    // ö�����п��ܵ����
    for (int five = 1; five * 5 <= amount - 3; five++)
    { // ������1��5Ԫ
        for (int two = 1; two * 2 <= amount - 5 * five - 1; two++)
        {                                            // ������1��2Ԫ
            int one = (amount - 5 * five - 2 * two); // ����1Ԫ������
            if (one >= 1)
            { // ������1��1Ԫ
                printf("5Ԫ: %d, 2Ԫ: %d, 1Ԫ: %d\n", five, two, one);
                count++;
            }
        }
    }
    /*�ڴ���Ƭ�� five * 5 <= amount - 3 �У�five ��һ����������ʾ5Ԫ��Ʊ�������������������������ȷ���ڷ���������һ��5Ԫ��Ʊ֮��ʣ�µĽ��㹻��������һ��2Ԫ��һ��1Ԫ�ĳ�Ʊ��*/
    /*�ڴ���Ƭ�� two * 2 <= amount - 5 * five - 1 �У�two ��һ����������ʾ2Ԫ��Ʊ�������������������������ȷ���ڷ���������һ��5Ԫ��Ʊ��֮���2Ԫ��Ʊ֮��ʣ�µĽ��㹻��������һ��1Ԫ�ĳ�Ʊ��*/
    if (count == 0)
    {
        printf("û�з�����������ϡ�\n");
    }
    else
    {
        printf("����%d����Ϸ�ʽ��\n", count);
    }

    return 0;
}