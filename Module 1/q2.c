#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("1st no- ");
    scanf("%d",&n1);
    printf("2nd no- ");
    scanf("%d",&n2);
    int sum,diff,prod,div;
    sum=n1+n2;
    diff=n1-n2;
    prod=n1*n2;
    div=n1/n2;
    printf("Sum= %d\n",sum);
    printf("Difference= %d\n",diff);
    printf("Product= %d\n",prod);
    printf("Division= %d\n",div);
    
    return 0;
}
