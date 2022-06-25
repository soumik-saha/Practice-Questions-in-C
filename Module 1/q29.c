#include<stdio.h>

int main()
{
    double rad, area, vol;
    printf("Enter the radius of a circle :");
    scanf("%lf",&rad);
    area= (22/7)*rad*rad;
    vol= (4/3)*(22/7)*rad*rad*rad;

    printf("Area of the circle is %lf",area);
    printf("\nVolume of the circle is %lf",vol);
    return 0;
}