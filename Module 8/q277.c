#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[100];
        int price;
    };
    struct book book1={"Aim of Life",150};
    struct book book2={"Ekigai",350};
    struct book book3,book4;
    strcpy(book3.name,book1.name);
    book3.price=book1.price;
    strcpy(book4.name,book2.name);
    book4.price=book2.price;

    printf("%s %i\n",book1.name,book1.price);
    printf("%s %i\n",book2.name,book2.price);
    printf("%s %i\n",book3.name,book3.price);
    printf("%s %i\n",book4.name,book4.price);
    return 0;
}