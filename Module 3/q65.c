#include<stdio.h>
#include<math.h>

int main()
{
    int n1, n2, power=1, i;
    printf("Enter base no : ");
    scanf("%d",&n1);
    printf("Enter power no : ");
    scanf("%d",&n2);
    
    for ( i = 1; i <= n2; i++)
    {
        power = n1*power;
    }
    printf("%d^%d = %d",n1,n2,power);
    
    return 0;
}