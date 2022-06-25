#include<stdio.h>

int main()
{
    float marks;
    printf("Enter  your marks : ");
    scanf("%f",&marks);

    if (marks<30 && marks>=0)
    {
        printf("Fail");
    }
    else if (marks<=44 && marks>=30)
    {
        printf("3rd div");
    }
    else if (marks<=59 && marks>=45)
    {
        printf("2nd div");
    }
    else if (marks<=100 && marks>=60)
    {
        printf("1st div");
    }
    
    return 0;
}