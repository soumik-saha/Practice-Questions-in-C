#include<stdio.h>

int main()
{
    float marks,total;
    printf("Enter Marks : ");
    scanf("%f",&marks);

    if (marks<=24)
    {
        total=marks+1;
    }
    else if (marks<=48)
    {
        total=marks+2;
    }
    else if (marks<=72)
    {
        total=marks+3;
    }
    else if (marks<=200)
    {
        total=marks+4;
    }
    
    printf("Total Marks : %f",total);

    return 0;
}