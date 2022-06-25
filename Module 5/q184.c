#include<stdio.h>
#define MAX 10
int main()
{
    int array[MAX],i;
        printf("All two digited natural number which are duivisibled by 9-\n");
    for (size_t i = 2; i < MAX; i++)
    {
        printf("array[%d] = %d\n",i-1,(i*9));
    }
    
    return 0;
}