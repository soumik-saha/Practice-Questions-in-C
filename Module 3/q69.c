#include<stdio.h>

int main()
{
    int i;
    float sum = 0;

    for ( i = 2; i <= 21; i++)
    {
        if (i!=21)
        {
            printf("1/%d + ",i);
        }
        else
        {
            printf("1/%d",i);
        }
        sum += (1/(float)i);
    }
    printf("\nSUM = %f",sum);
    
    return 0;
}