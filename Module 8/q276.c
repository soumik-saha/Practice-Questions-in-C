#include<stdio.h>

struct myStructure
{
    char name[100];
    int age, salary;
};

int main()
{
    struct myStructure s1 = {"Soumik",18,30000};
    struct myStructure s2;
    s2 = s1;

    printf("%s %d %i\n",s1.name,s1.age,s1.salary);
    printf("%s %d %i\n",s2.name,s2.age,s2.salary);

}
