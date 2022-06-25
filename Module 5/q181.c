#include<stdio.h>
#define MAX 5
int main()
{
    int a[MAX],b[MAX],c[MAX],i,sum=0;
    for (size_t i = 0; i < MAX; i++)
    {
        printf("a[%d]:  ",i+1);
        scanf("%d",&a[i]);
        printf("b[%d]:  ",i+1);
        scanf("%d",&b[i]);

    sum=sum+a[i]+b[i];
    }
    printf("Sum of those elements =  %d",sum);
    return 0;
}