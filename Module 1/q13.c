#include<stdio.h>

int main()
{
    int H,m,s,t; // take double for all types of input
    printf("Enter H,m,t :\t");
    scanf("%D %D %D",&H,&m,&t);
    s=H/(m*t);
    printf("The specific heat =  %d",s);
    return 0;
}