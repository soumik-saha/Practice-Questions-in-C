#include<stdio.h>

int main()
{
    double product=1;
    for (int i = 10; i <= 60; i++)
    {
        if (i%5==0)
        {
            // n = i;
        product *= i;
        }
        // printf("%lf\n",product);
    }
    printf("Product of all natural nos. from 10 to 60, which are divisible by 5 = %lf",product);
    return 0;
}