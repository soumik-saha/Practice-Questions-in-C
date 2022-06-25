#include<stdio.h>

int main()
{
    double basic,TA,DA,HRA,MA,IT,NET;
    printf("Enter the basic salary : ");
    scanf("%lf",&basic);
    TA=basic*0.02;
    DA=basic*.13;
    HRA=basic*.04;
    MA=basic*.05;
    IT=basic*.12;
    NET=basic+TA+DA+HRA+MA-IT;
    printf("TA= %.2lf\n",TA);
    printf("DA= %.2lf\n",DA);
    printf("HRA= %.2lf\n",HRA);
    printf("MA= %.2lf\n",MA);
    printf("IT= %.2lf\n",IT);
    printf("NET SALARY= %.2lf\n",NET);
    return 0;
}