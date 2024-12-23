#include <string.h>
#include <stdlib.h>
// s:一个形如a[运算符]b的字符串,例如：4.5+9,6-9,4/5,8*7...
// 该函数经过处理，输出数的运算结果，例如若s为"20.3+1",则该函数在屏幕上输出21.30(保留小数点后面2位有效数字
// 此函数内部操作的基本算法为：
// 第1步：找到运算符对应的位置索引
// 第2步：根据运算符位置，将其前面的字符串复制到strA,后面的字符串复制到strB
// 第3步：将strA，strB转换为数值（使用函数atof,具体用法请百度）a，b
// 第4步：根据运算符，对a，b进行相应的运算
// 第5步：输出运算结果result
void processUserInputStr(char *s)
{
    int len = strlen(s); // s中有效字符的个数
    // strA,strB分别用于存放两个操作数对应的字符串
    char strA[100], strB[100];
    // a,b分别用于存放将字符串转换后的数,result用于保存运算结果
    double a, b, result;
    char op;      // 用于存储s中的运算符对应的字符串
    int k, posOp; // posOp：符号的位置索引
    /**********begin**********/
    for (posOp = 0; posOp < len; posOp++)
    {
        if (s[posOp] == '+' || s[posOp] == '-' || s[posOp] == '*' || s[posOp] == '/')
        {
            op = s[posOp];
            break;
        }
    }
    strncpy(strA, s, posOp);
    strA[posOp] = '\0';
    strcpy(strB, s + posOp + 1);
    a = atof(strA);
    b = atof(strB);
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        return;
    }
    printf("%.2f\n", result);
}

/**********end**********/