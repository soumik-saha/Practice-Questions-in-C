#include<stdio.h>
struct mybook{
    char name[100];
    int price;
    int page;
};

int main()
{
    struct mybook list[100];
        for (int i = 1; i <= 100; i++)
        {
            printf("Enter Book Name : ");
            fflush(stdin);
            gets(list[i].name);
            printf("Enter the price : ");
            scanf("%d",&list[i].price);
            printf("Enter the page : ");
            scanf("%d",&list[i].page);
        }
        for (int i = 1; i <= 100; i++)
        {
            printf("%s\t%d\t%d\n",list[i].name,list[i].price+list[i].price*0.1,list[i].page);
        }
    return 0;
}