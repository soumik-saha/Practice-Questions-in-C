#include<stdio.h>

int main()
{
    int i,dim;
    float sum=0;
    for ( i = 1; i <= 6; i++)
    {
        dim=i+1;
        
        if (i!=6)
        {
            printf("%d/(%d*%d) + ",i,i,dim);
        }
        else
        {
            printf("%d/(%d*%d)",i,i,dim);
        }
        
        dim++;

        sum=sum+ ((float)i/((float)i*(float)dim));
    }
    printf("\nSUM = %f",sum);
    return 0;
}