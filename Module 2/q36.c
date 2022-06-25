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
        printf("%f -> grace %d",marks,grace);
    }
    else if (marks<26 && marks>19)
    {
        printf("%f -> Suppli",marks);
    }
    
    else
    {
        printf("%f -> Fail",marks);
    }
    return 0;
}