#include<stdio.h>

int main()
{
    int i,n1,n2;
    int sum=0;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);

    for ( i = n1; i <= n2; i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
    return 0;
}