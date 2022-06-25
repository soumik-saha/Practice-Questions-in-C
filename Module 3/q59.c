#include<stdio.h>
//10 9 7 6 4 3 1
int main()
{
    int i=10,n=1;
    
    while (i>=1)
    {
        if (i==8 || i==5 || i==2)
        {
            continue;
        }
        else
        {
            printf("%d ",i);
        }
        n=n+1;
        i--;
    }
    
    return 0;
}