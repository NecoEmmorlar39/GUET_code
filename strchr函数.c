#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "abcdef";
    char ch;
    printf("请输入一个字符：");
    ch = getchar(); // 从标准输入读取一个字符

    char *p = str;
    char *pt = strchr(str, ch); // 在字符串str中查找字符ch

    if (pt != NULL)
    {
        // 如果找到了字符，计算并打印其位置
        printf("%d\n", pt - p + 1);
    }
    else
    {
        // 如果没有找到字符，打印错误信息
        printf("字符 '%c' 不在字符串中。\n", ch);
    }

    return 0;
}