#include<stdio.h>
#include<math.h>
double power(double x,double y);

int main()
{
    double a,b;
    printf("Enter a number= ");
    scanf("%lf",&a);
    printf("Enter a power= ");
    scanf("%lf",&b);
    // power(a,b);
    printf("The answer = %lf",power(a,b));
    return 0;
}
double power(double x,double y){
    double result=pow(x,y);
    return result;
}