#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Today, I ate %d apple.", n);
    }
    if (n == 1)
    {
        printf("Today, I ate %d apple.", n);
    }
    if (n > 1)
    {
        printf("Today, I ate %d apples.", n);
    }
    return 0;
}