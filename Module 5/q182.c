#include<stdio.h>

int main()
{
    int A[5],B[5],c,i;
    for ( i = 0; i < 5; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&A[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("B[%d] : ",i);
        scanf("%d",&B[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        //swap
        c=A[i];
        A[i]=B[i];
        B[i]=c;
        printf("A[%d] : %d \n",i,A[i]);
        printf("B[%d] : %d \n",i,B[i]);
    }
    
    return 0;
}