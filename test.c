#include <stdio.h>
long int fac(int n) // 定义为long int 型，避免溢出
{
    long int f;
    if (n == 0)
        return 0; // 当n=0是，递归法到尽头，依次返回函数值。
    f = fac(n - 1) * n;
    return (f); // 返回最后一次函数值，即单次阶乘的最后结果
}

int main()
{
    long int n;
    long int s = 0;
    int i;
    scanf("%ld", &n); // 此处注意scanf_s与scanf的使用场景
    for (i = 1; i <= n; i++)
        s += fac(i); // 以循环控制阶乘的和。fac函数每一次的返回值作为s的自加值
    printf("%ld", s);
    return 0;
    
}