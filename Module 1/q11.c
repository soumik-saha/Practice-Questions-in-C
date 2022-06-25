#include<stdio.h>

int main()
{
    float s,u,t,f;
    printf(" Enter s,u,t =");
    scanf("%f %f %f",&s,&u,&t);
    f=((s-(u*t))*2)/(t*t);
    printf("f = %f",f);
    return 0;
}