#include<stdio.h>

int main()
{
    float marks;
    printf("Enter  your marks : ");
    scanf("%f",&marks);

    if (marks>=34 && marks<=100)
    {
        printf("You have passed the examination.");
    }
    else if (marks<34 && marks>=0)
    {
        printf("You are failed in the examination.");
    }
    else
    {
        printf("Invalid Marks.\nPlease enter the correct marks here!");
    }
    
    
    return 0;
}