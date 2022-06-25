#include<stdio.h>

int main()
{
    int n;
    printf("Enter a no\n");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("\nIt is divisible by 2.");
        if (n%10==0)
        {
            printf("\nThe last digit is 0.");
        }
        else
        {
            printf("\nThe last digit isn't 0.");
        } 
    }
    else
    {
        printf("\nIt is not divisible by 2.");
    }
    
    
    return 0;
}