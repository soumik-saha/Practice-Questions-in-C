#include <stdio.h>

int main()
{
    int array[10], i;
    int even_sum = 0;
    int odd_sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("array[%d] : ", i + 1);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 5; i++)
    {

        if (array[i] % 2 == 0)
        {
            even_sum = even_sum + array[i];
        }
        else
        {
            odd_sum = odd_sum + array[i];
        }
    }

    printf("The sum of odd numbers  =  %d\n", odd_sum);
    printf("The sum of even numbers  =  %d\n", even_sum);

    return 0;
}