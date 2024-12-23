#include <stdio.h>
int main()
{
    int number = 0, xx = 0, dx = 0, other = 0;
    char ch;
    while (1)
    {
        ch = getchar();
        if (ch == 'q')
        {
            xx++;
            break;
        }
        if (ch == 'Q')
        {
            dx++;
            break;
        }
        if (ch >= 65 && ch <= 90)
        {
            dx++;
        }
        else if (ch >= 97 && ch <= 122)
        {
            xx++;
        }
        else if (ch >= 48 && ch <= 57)
        {
            number++;
        }
        else
            other++;
    }
    printf("%d\n", number);
    printf("%d\n", xx);
    printf("%d\n", dx);
    printf("%d\n", other);
    return 0;
}