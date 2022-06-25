#include<stdio.h>
int main()
{
    int v,u,f,t;
    printf("Enter initial velocity:\n");
    scanf("%d",&u);
    printf("Enter final velocity:\n");
    scanf("%d",&v);
    printf("Enter time period:\n");
    scanf("%d",&t);
    f=(v-u)/t;
    printf("Acceleration: %f",(float)f);
    return 0;
}
