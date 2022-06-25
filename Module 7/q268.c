#include<stdio.h>
double factorial(double x);
int main()
{
    double a;
    printf("Enter a number\n");
    scanf("%lf",&a);
    factorial(a);
    printf("The factorial of %lf is %lf",a,factorial(a));
    // printf("The factorial of %lf is %lf",x,factorial);
    return 0;
}
double factorial(double x){
    // printf("%lf \n ",x);
    // double result=x*factorial(x-1);
    if (x==0||x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
    

    // printf("The factorial of %lf is %lf",x,result);
    
    // return result;
    
}