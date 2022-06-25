#include<stdio.h>
#define MAX 5
int main()
{
    int increment[MAX],i;
    for ( i = 0; i < MAX; i++)
    {
    printf("increment[%d] : \n",i);
    scanf("%d",&increment[i]);    
    // increment[i]=increment[i]+2;
    printf("After incremented by 2: %d\n",increment[i]+2);
    
    }
    return 0;
}