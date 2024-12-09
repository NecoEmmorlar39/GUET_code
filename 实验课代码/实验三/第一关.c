#include <stdio.h>
int main(void)
{
    int a[5] = {5, 4, 3, 2, 1};
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    printf("sum=%d\n", sum);
    return 0;
}