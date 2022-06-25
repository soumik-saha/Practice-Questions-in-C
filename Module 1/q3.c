#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c,f;
    printf("Centigrade Temp=");
    scanf("%d",&c);
    f=9*(c+32)/5;
    printf("Fahrenheit Temp=%d",f);
    return 0;
}