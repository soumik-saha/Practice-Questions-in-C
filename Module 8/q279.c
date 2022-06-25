#include<stdio.h>
#include<string.h>
int main()
{
    struct structure{
        char author[100],publication[100];
    };
    struct structure s1;
    strcpy(s1.author, "Soumik Saha");
    strcpy(s1.publication, "Edge of Soumik");
    
    printf("%s  %s",s1.author,s1.publication);
    return 0;
}