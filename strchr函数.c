#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "abcdef";
    char ch;
    printf("������һ���ַ���");
    ch = getchar(); // �ӱ�׼�����ȡһ���ַ�

    char *p = str;
    char *pt = strchr(str, ch); // ���ַ���str�в����ַ�ch

    if (pt != NULL)
    {
        // ����ҵ����ַ������㲢��ӡ��λ��
        printf("%d\n", pt - p + 1);
    }
    else
    {
        // ���û���ҵ��ַ�����ӡ������Ϣ
        printf("�ַ� '%c' �����ַ����С�\n", ch);
    }

    return 0;
}