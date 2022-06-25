#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st no\n");
    scanf("%d",&a);
    printf("Enter 2nd no\n");
    scanf("%d",&b);
    printf("Enter 3rd no\n");
    scanf("%d",&c);

    // if a=1; b=2; c=3
    c=a+b+c;//c=6
    b=c-(a+b);//b=3
    a=c-(a+b);//a=2
    c=c-(a+b);//c=1
    printf("1st No = %d\n",a);
    printf("2nd No = %d\n",b);
    printf("3rd No = %d\n",c);
    
    return 0;
}