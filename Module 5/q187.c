#include<stdio.h>
int factorial(int n);
int main()
{
    int array[5],i;
    for ( i = 0; i < 5; i++)
    {
        printf("array[%d] : ",i+1);
        scanf("%d",&array[i]);

    }
    for ( i = 0; i < 5; i++)
    {
        printf("factorial[%d] :  %d\n",array[i],factorial(array[i]));
        // printf("factorial[%d] :  %d",array[1],factorial(array[1]));
        // printf("factorial[%d] :  %d",array[2],factorial(array[2]));
        // printf("factorial[%d] :  %d",array[3],factorial(array[3]));
        // printf("factorial[%d] :  %d",array[4],factorial(array[4]));
        // printf("factorial[%d] :  %d",array[5],factorial(array[5]));

    }
    return 0;
}
int factorial(int n)
{
    
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1); 
    }
   
}
    