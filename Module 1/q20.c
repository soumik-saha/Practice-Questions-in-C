#include<stdio.h>

int main()
{
    float area, base, height;
    printf("Input Base, Height : ");
    scanf("%f %f",&base,&height);
    area=0.5*base*height;
    printf("Area =  %f",area);
    return 0;
}