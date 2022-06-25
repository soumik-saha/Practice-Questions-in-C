#include<stdio.h>

int main()
{
    double fare_km,dist;
    printf("Fare in KM = ");
    scanf("%lf",&fare_km);
    printf("Distance in KM = ");
    scanf("%lf",&dist);

    double fare = dist*fare_km;
    printf("Fare = %lf",fare);
    return 0;
}