#include<stdio.h>

int main()
{
    int f,m;
    printf("Input Force :\t");
    scanf("%d",&f);
    printf("Input Mass :\t");
    scanf("%d",&m);
    printf("Acceleration = %d",f/m); //f=m*a
    return 0;
}