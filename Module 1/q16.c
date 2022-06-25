#include<stdio.h>

int main()
{
    double x,A,B;
    printf("Enter A and B :  ");
    scanf("%lf%lf",&A,&B);
    x=-(A/B);
    printf("x = %lf",x);
    return 0;
}