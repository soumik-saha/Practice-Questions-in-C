#include <stdio.h>

int main()
{
    double basic, gross, ta, da, hra;
    printf("Enter the Basic Salary : ");
    scanf("%lf",&basic);

    if (basic>0 && basic<4000)
    {
        ta=basic*0.06;
        da=basic*0.07;
        hra=basic*0.06;
    }
    else if (basic<6000)
    {
        ta=basic*0.07;
        da=basic*0.08;
        hra=basic*0.09;
    }
    else if (basic<8000)
    {
        ta=basic*0.08;
        da=basic*0.09;
        hra=basic*0.10;
    }
    else if (basic>=8000)
    {
        ta=basic*0.09;
        da=basic*0.10;
        hra=basic*0.11;
    }
    
    gross=basic+ta+da+hra;
    printf("Gross Salary : %lf",gross);
    
    return 0;
}