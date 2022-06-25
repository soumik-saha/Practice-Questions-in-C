#include<stdio.h>

int main()
{
    int i;
    float sum=0;
    for ( i = 1; i <= 5; i++)
    {
        if (i!=5)
        {
            printf("1/%d + ",i);
        }
        else
        {
            printf("1/%d",i);
        }
        
        sum= sum+(1/(float)i);
    }
    printf("\nSUM = %f",sum);
    
    return 0;
}