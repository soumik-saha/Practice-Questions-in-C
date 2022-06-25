#include<stdio.h>

int main()
{
    float array[5];
    int i;
    for ( i = 0; i < 1; i++)
    {
        printf("array[%d] : ",i+1);
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d",((((array[i]/10))-(int)(array[i]/10))*10));
        // printf("array[%d] = %d\n",i+1,(array[i]/10));
        
    }
    
    return 0;
}