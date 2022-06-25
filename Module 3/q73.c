#include<stdio.h>

int main()
{
    float fact=1,sum=0;
    for (int i = 1; i <= 6; i++)
    {
        if (i!=6)
        {
            printf("%d!/%d + ",i,i+1);
        }
        else
        {
            printf("%d!/%d",i,i+1);
        }
        fact=fact*i;
        sum=sum+ (float)(fact/(i+1));
        
    }
    printf("\nSUM = %f",sum);
    return 0;
}