#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%3==0){
        printf("%d is divisible by 3\n",n);

        if (n%5==0)
        {
            printf("%d is divisible by both 3 and 5\n",n);
        }
        else
        {
            printf("%d is divisible by 3 and not divisible by 5\n",n);
        }
        
    }
    else if (n%5==0)
    {
        printf("%d is divisible by 5\n",n);
    }
    
    else{
        printf("%d is not divisible by both 3 and 5\n",n);
    }

    
    
    return 0;
}