#include <stdio.h>
int max(int *a, int *b)
{
    int max;
    if (*a > *b)
        max = *a;
    else
        max = *b;

    return max;
}
int main()
{
    int m, x, y;
    scanf("%d %d", &x, &y);
    m = max(&x, &y);
    printf("max=%d", m);
    return 0;
}
