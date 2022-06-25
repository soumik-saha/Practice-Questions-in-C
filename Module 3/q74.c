#include<stdio.h>

int main()
{
    float fact=1,sum=0;
    for (int i = 1; i <= 7; i++)
    {
        if (i!=7)
        {
            printf("%d/%d! + ",i,i);
        }
        else
        {
            printf("%d/%d!",i,i);
        }
        fact=fact*i;
        sum=sum+ (float)(i/fact);
        
    }
    printf("\nSUM = %f",sum);
    return 0;
}