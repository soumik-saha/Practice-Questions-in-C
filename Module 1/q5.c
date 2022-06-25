#include<stdio.h>
int main()
{
    int l,b;
    
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    int area,perim;
    area=l*b;
    perim=2*(l+b);
    printf("Area= %d\n",area);
    printf("Perimeter= %d",perim);
    return 0;
}
