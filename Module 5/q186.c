#include <stdio.h>
// #define count 5
int main()
{
    int array[5], i;
    int n;
    for (i = 0; i < 2; i++)
    {
        printf("ARRAY[%d] :  ", i + 1);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 2; i++)
    {
        for (n = 2;n < 100 ;n++ )
        {
            if ((array[i] % n != 0)&&(array[i]*1==array[i]))
            {
                printf("%d is non prime number\n", array[i]);
            }
        }
    }

    return 0;
}