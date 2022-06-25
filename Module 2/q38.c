#include<stdio.h>

int main()
{
    float fixed=500.0,add_1,add_2, TotalBill;
    int call_1,call_2;
    printf("Enter the no of  calls of month 1 : ");
    scanf("%d",&call_1);
    printf("Enter the no of  calls of month 2 : ");
    scanf("%d",&call_2);
//for month 1
    if (call_1>50)
    {
        if (call_1<=150)
        {
            add_1= 0.80;
        }
        else if (call_1<=250)
        {
            add_1=1.00;
        }
        
        else if (call_1<=350)
        {
            add_1=1.20;
        }
        else if (call_1>350)
        {
            add_1=1.30;
        }
        // float bill_1;
        // bill_1=fixed+add;
        // printf("Bill of month 1 is %f",bill_1);
    }
//for month 2
    if (call_2>50)
    {
        if (call_2<=150)
        {
            add_2= 0.80;
        }
        else if (call_2<=250)
        {
            add_2=1.00;
        }
        
        else if (call_2<=350)
        {
            add_2=1.20;
        }
        else if (call_2>350)
        {
            add_2=1.30;
        }
        // float bill_2;
        // bill_2=fixed+add;
        // printf("Bill of month 2 is %f",bill_2);
    }
    TotalBill=fixed+add_1+add_2;
    printf("Total Bill for 2 months is %f",TotalBill);
    return 0;
}