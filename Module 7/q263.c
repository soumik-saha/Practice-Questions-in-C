#include<stdio.h>
float sum(float a, float b);//function prototype

int main()
{
    float x,y;
    printf("Enter two numbers\n");//function call
    scanf("%f %f",&x,&y);
    sum(x,y);
    return 0;
}

float sum(float a, float b){
    float sum=a+b;
    printf("Sum of those numbers = %f",sum);//function defination
    return sum;
}