#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d %d", &a, &b);
    sum(a, b);
    printf("The sum between those numbers= %d", sum(a, b));
    return 0;
}

int sum(int x, int y)
{
    // int result;
    // for (x <= y; i++)
    //{
    // if (y>x)
    // {
    //     /* code */
    // return (x + sum((x - 1),y));
    // }
    
    //}

    // return result;
    int result=0;
    for (x; x <= y; x++ )
    {
        result=result+sum(x,y);
    }
    return result;
}