// #include<stdio.h>
// #include<math.h>
// float square(float n);

// float main()
// {
//     float x;
//     printf("Enter a number\n");
//     scanf("%f",&x);
//     printf("The square of the number = %f",square(x));
//     square(x);
//     return 0;
// }

// float square(float n){
//     float result=pow(n,2);
//     printf("The square of the number = %f",square(n));
//     return result;
// }

#include<stdio.h>
#include<math.h>
float square(float n);

float main()
{
    float x;
    printf("Enter a number\n");
    scanf("%f",&x);
    printf("The square of the number = %f",square(x));
    square(x);
    return 0;
}

float square(float n){
    float result=pow(n,2);
    printf("The square of the number = %f",result);
    return result;
}