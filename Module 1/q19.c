#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter 1st side : ");
    scanf("%f",&a);
    printf("Enter 2nd side : ");
    scanf("%f",&b);
    printf("Enter 3rd side : ");
    scanf("%f",&c);
    
    float s, area; //semiperimeter, Area
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the Triangle is %f",area);
    return 0;
}