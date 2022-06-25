#include<stdio.h>
float ftemp(float c,float f);

int main()
{
    float c=10,f;
    ftemp(c,f);
    printf("The fahreinheit value is %f",ftemp(c.f));
    return 0;
}

float ftemp(float c,float f){
    f=(c*(9/5))+32;
    return f;
}
//F
// =
// C
// ×
// 9/
// 5
// +
// 32