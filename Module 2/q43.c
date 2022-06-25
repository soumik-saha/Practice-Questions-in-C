#include<stdio.h>

int main()
{
    int roll,amt,payamt;
    printf("Enter Roll No. : ");
    scanf("%d",&roll);
    printf("Enter Total Amount : ");
    scanf("%d",&amt);

    switch (roll)
    {
    case 1:
        payamt=amt-(amt*0.5);
        printf("Payble Amount = %d",payamt);
        break;
    case 2:
        payamt=amt-(amt*0.4);
        printf("Payble Amount = %d",payamt);
        break;
    case 3:
        payamt=amt-(amt*0.3);
        printf("Payble Amount = %d",payamt);
        break;
    case 4:
        payamt=amt-(amt*0.25);
        printf("Payble Amount = %d",payamt);
        break;
    case 5:
        payamt=amt-(amt*0.2);
        printf("Payble Amount = %d",payamt);
        break;
    
    default:
        printf("Payable Amount = %d",amt);
        break;
    }
    return 0;
}