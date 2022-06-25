#include<stdio.h>

int main()
{
    int ascii_value, max_range;
    printf("Enter range of ASCII value (Range_1 to Range_2) : ");
    scanf("%d%d",&ascii_value,&max_range);
    while (ascii_value<=max_range)
    {
        printf("\nASCII value = %d\n Character = '%c'\n",ascii_value,(char)ascii_value);
        ascii_value++;
    }
    
    return 0;
}