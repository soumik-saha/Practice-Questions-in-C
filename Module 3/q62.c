#include<stdio.h>

int main()
{
    int i,n;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
    return 0;
}