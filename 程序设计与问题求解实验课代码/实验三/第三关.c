#include <stdio.h>
int main()
{
    int arr[40], count[10] = {0};
    for (int i = 0; i < 40; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 40; j++)
    {
        count[arr[j] - 1]++;
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d\t%d\t", k + 1, count[k]);
        for (int l = 0; l < count[k]; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}