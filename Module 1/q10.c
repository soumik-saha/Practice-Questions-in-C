#include<stdio.h>
int main()
{
    int no_boarders,cost_food;
    printf("Enter the no of boarders and the food cost :");
    scanf("%d %d",&no_boarders,&cost_food);
    int total_cost=50+(no_boarders*cost_food);
    printf("Total Expenses= %d",total_cost);
    
    return 0;
}
