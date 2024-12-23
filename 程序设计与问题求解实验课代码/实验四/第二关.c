#include <stdio.h>
long fact(long a);
void main()
{
    long n, result = 0;
    long i;
    scanf("%ld", &n);
    for (i = 1; i <= n; i++)
    {
        result += fact(i);
    }
    printf("1!+2!+...+n!=%ld", result);
}
long fact(long a)
{
    if (a == 1)
    {
        return 1;
    }
    else
        return a * fact(a - 1);
}