#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0, a = 0;
    char str[50];
    scanf("%d", &n);
    scanf("%s", str);
    if (n == 0)
    {
        printf("%s", str);
        return 0;
    }
    a = strlen(str);
    for (int i = 0; i < a; i++)
    {
        str[i] = ((str[i] - 'a' + n) % 26) + 'a';
    }
    printf("%s", str);
    return 0;
}
