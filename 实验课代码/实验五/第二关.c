#include <stdio.h>
void inputData(double *data, int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &data[i]);
    }
}
void outputData(double *data, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%.2lf ", data[i]);
    }
}
void swap(double *x, double *y)
{
    double temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sortData(double *data, int N, int mode)
{
    if (mode == 0)
    {
        for (int k = 0; k < N - 1; k++)
        {
            for (int j = 0; j < N - 1 - k; j++)
            {
                if (*(data + j) > *(data + j + 1))
                {
                    swap((data + j), (data + j + 1));
                }
            }
        }
    }
    else
    {
        for (int k = 0; k < N - 1; k++)
        {
            for (int j = 0; j < N - 1 - k; j++)
            {
                if (*(data + j) < *(data + j + 1))
                {
                    swap((data + j), (data + j + 1));
                }
            }
        }
    }
}

int main()
{
    int N, mode;
    double data[100] = {0};
    scanf("%d %d", &N, &mode);
    inputData(data, N);
    sortData(data, N, mode);
    outputData(data, N);
    return 0;
}