#include<stdio.h>

int main()
{
    int i,n;
    long factorial=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d = %ld",n,factorial);
    return 0;
}