#include<stdio.h>

int main()
{
    int n;
    // scanf("%d",&n);
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%c ", j+100);
        }
        printf("\n");
    }
    
    return 0;
}