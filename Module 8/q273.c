#include<stdio.h>
#include<string.h>
#define MAX 50
struct book
{
    char name[MAX];
    int price, pages;
};

int main()
{
    struct book set1;
    struct book set2;
    struct book set3;

    strcpy(set1.name, "Autobiography of a Yogi");
    set1.price = 90;
    set1.pages = 350;

    strcpy(set2.name,"Power of Your Subconsious Mind");
    set2.price = 110;
    set2.pages = 450;

    strcpy(set3.name, "Think & Grow Rich");
    set3.price = 150;
    set3.pages = 300;

    set1.price = set1.price+set1.price*0.1;
    set2.price = set2.price+set2.price*0.1;
    set3.price = set3.price+set3.price*0.1;

    printf("%s\t\t%i\t%i\n",set1.name,set1.price,set1.pages);
    printf("%s\t%i\t%i\n",set2.name,set2.price,set2.pages);
    printf("%s\t\t%i\t%i\n",set3.name,set3.price,set3.pages);
    return 0;
}