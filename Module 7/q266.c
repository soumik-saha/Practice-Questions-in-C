#include<stdio.h>
double square_cube(double a);

int main()
{
    double n;
    printf("Enter a number= ");
    scanf("%lf",&n);
    square_cube(n);
    return 0;
}
double square_cube(double a){
    double square,cube;
    square=a*a;
    cube=a*a*a;
    printf("Square of the number = %lf\n",square);
    printf("Cube of the number = %lf\n",cube);
    return square;
    return cube;

}