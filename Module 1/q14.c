#include<stdio.h>

int main()
{
    float H,I,r,t;
    printf("Enter T,r,t :\t");
    scanf("%f%f%f",&I,&r,&t);
    H=I*I*r*t;
    printf("H = %f",H/4.2);
    return 0;
}