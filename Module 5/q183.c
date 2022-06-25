#include<stdio.h>
#include<math.h>

int main()
{
    int a[5],b[5],c[5],i;
    for ( i = 0; i < 5; i++)
    {
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("b[%d] : ",i+1);
        scanf("%d",&b[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        c[i]=pow(a[i],b[i]);
        printf("c[%d] : %d",i,c[i]);
    }
    
    return 0;
}