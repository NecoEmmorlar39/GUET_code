#include <stdio.h>

int main()
{
    long int L = 0, sum = 0, arr[100000], n = 1;
    scanf("%ld", &L);
    arr[0] = 2;
    sum += 2;

    for (long int i = 3; sum + i <= L; i += 2)
    { // 从3开始，只检查奇数
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            arr[n++] = i;
            sum += i;
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%ld\n", arr[k]);
    }
    printf("%ld\n", n); // 输出n时换行

    return 0;
}