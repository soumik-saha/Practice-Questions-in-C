#include<stdio.h>
#define MAX 10
int main()
{
    int array[MAX],i;
    printf("First 10 natural square numbers including zero-\n");
    for (size_t i = 0; i < MAX; i++)
    {
        printf("array[%d] = %d\n",i+1,i);
    }
    return 0;
}