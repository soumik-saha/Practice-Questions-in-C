#include <stdio.h>

int main()
{
    int array[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("ARRAY[%d] :  ", i + 1);
        scanf("%d", &array[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        array[i] = array[9-i];
        printf("ARRAY[%d] = %d\n",i+1,array[i]);
    }
    
    return 0;
}