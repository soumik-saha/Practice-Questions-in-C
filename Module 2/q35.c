#include<stdio.h>

int main()
{
    float marks;
    printf("Enter Marks\n");
    scanf("%f",&marks);

    if (marks>=26 && marks<=30)
    {
        int grace;
        grace=30-marks;
        printf("Grace marks = %d",grace);
    }
    else
    {
        printf("You are not able to get grace marks.");
    }
    
    
    return 0;
}