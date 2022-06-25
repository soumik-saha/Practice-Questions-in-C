#include<stdio.h>
int main()
{
    int rate,quantity;
    printf("Rate= ");
    scanf("%d",&rate);
    printf("Quantity= ");
    scanf("%d",&quantity);
    float amt;
    printf("Payable Amount is %f",(rate+(rate*0.004))*quantity);
    return 0;
}
