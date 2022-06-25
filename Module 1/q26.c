#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter 1st no\n");
    scanf("%d",&a);
    printf("Enter 2nd no\n");
    scanf("%d",&b);
    printf("Enter 3rd no\n");
    scanf("%d",&c);

    d=a;
    a=b;
    b=c;
    c=d;

    printf("1st No = %d\n",a);
    printf("2nd No = %d\n",b);
    printf("3rd No = %d\n",c);
    return 0;
}