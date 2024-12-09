#include <stdio.h>
#include <string.h>
int main()
{
    int a[100] = {0}, max = 0, min = 0, n, sum = 0;
    float average;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    max = a[0];
    min = a[0];
    for (int j = 1; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
        if (a[j] < min)
            min = a[j];
    }
    average = (float)sum / n;
    printf("%d %d %.2f", max, min, average);
    return 0;
}