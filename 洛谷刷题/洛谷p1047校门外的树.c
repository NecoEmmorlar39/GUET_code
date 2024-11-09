#include <stdio.h>
int main()
{
    int l,m,count=0;
    int road[10000];
    int arr[100][2];
    scanf("%d %d",&l,&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }
    for (int j = 0; j < l; j++)
    {
        road[j]=1;
    }
    for (int k = 0; k < m; k++)
    {
        for(int a = arr[k][0]; a <= arr[k][1]; a++)
        {
            road[a]=0;
        }
        
    }
    for(int b=0;b<l;b++)
    {
        if(road[b]==1)
        {
            count++;
        }
    }
    printf("%d",count+1);   
    return 0;
}