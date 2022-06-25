#include<stdio.h>

int main()
{
    struct address
    {
        int home_no,pin_code;
        char city[100];
    };
    struct employee
    {
        char name[100];
        struct address;
    };
    
    
    return 0;
}