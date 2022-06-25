#include<stdio.h>

int main()
{
    int unit;
    float bill;
    printf("Enter The UNIT : ");
    scanf("%d",&unit);

    if(unit<=100 && unit>0){
        bill=(2*unit)+9;
    }
    else if (unit<=200)
    {
        bill=(3*unit)+24;
    }
    else if (unit<=300)
    {
        bill=(3.5*unit)+(3.5*unit*.02);
    }
    else if (unit<=400)
    {
        bill=(4*unit)+(4*unit*0.032);
    }
    else if (unit<=500)
    {
        bill=(5*unit)+(5*unit*.045)+45;
    }
    else
    {
        bill=(5.55*unit)+(5.55*unit*0.0434)+13.56;
    }
    
    printf(
        "Total Bill = %f",bill
    );
    
    return 0;
}