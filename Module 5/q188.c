#include<stdio.h>

int main()
{
    int array[5],i;
    for ( i = 0; i < 5; i++)
    {
        printf("array[%d] : ",i+1);
        scanf("%d",&array[i]);
    }
    int sum=0;
    for ( i = 0; i < 5; i++)
    {
        sum=sum+array[i];
    }
        printf("The sum of these elements is = %d",sum);
    
    return 0;
}