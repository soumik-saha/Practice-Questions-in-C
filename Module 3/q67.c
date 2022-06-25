#include<stdio.h>

int main()
{
    int i,sum=0;
    for ( i = 1; i < 6; i++)
    {
        if (i!=5)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d",i);
        }
        
            sum+=i;
    }
        printf("\nSUM = %d",sum);
    
    return 0;
}