#include<stdio.h>

int main()
{
    struct result
    {
        char name[150];
        int beng, eng, math;
    };
    struct result set[10];
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter Name: ");
        fflush(stdin);
        gets(set[i].name);
        printf("Bengali marks: ");
        scanf("%d",&set[i].beng);
        printf("English marks: ");
        scanf("%d",&set[i].eng);
        printf("Maths marks: ");
        scanf("%d",&set[i].math);
    }
    for (int i = 0; i <= 10; i++)
    {
        if (i==0)
        {
            printf("Id\tName\tBeng\tEng\tMath\tTotal\n");
        }
        else
        {
            printf("%d\t%s\t%d\t%d\t%d\t%d\n",i,set[i].name,set[i].beng,set[i].eng,set[i].math,set[i].beng+set[i].eng+set[i].math);
        }
    }
    return 0;
}