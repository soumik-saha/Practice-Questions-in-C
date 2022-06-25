#include<stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",i+96);
        }
        
    printf("\n");
    }
    return 0;
}