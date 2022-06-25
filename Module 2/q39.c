#include<stdio.h>

int main()
{
    double basic,gross;
    printf("Enter the Basic Salary : ");
    scanf("%lf",&basic);

    if (basic<4000)
    {
        gross=basic+(basic*0.2);
        printf("Gross Salary = %lf",gross);
    }
    else
    {
        printf("no bonus");
    }
    
    

    return 0;
}