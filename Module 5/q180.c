#include <stdio.h>
#define MAX 7
int main()
{
    int array[MAX], i, min, max;
    for (size_t i = 0; i < MAX; i++)
    {
        printf("number[%d]:\t", i + 1);
        scanf("%d", &array[i]);
    }
    //finding maximum number by using array
    min = max = array[0];
    for (i = 1; i < MAX; i++)
    {
        if (min > array[i])
            min = array[i];
        if (max < array[i])
            max = array[i];
    }
    printf("minimum of array is : %d", min);
    printf("\nmaximum of array is : %d", max);

    return 0;
}