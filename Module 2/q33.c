#include<stdio.h>

int main()
{
    char grade;
    printf("Enter the grade of an Indian Cricket Player : ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Salary = 8,00,000");
        break;
    case 'B':
        printf("Salary = 6,00,000");
        break;
    case 'C':
        printf("Salary = 3,00,000");
        break;
    
    default:
        printf("You have entered wrong information!");
        break;
    }
    return 0;
}