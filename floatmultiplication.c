#include <stdio.h>

float multiply(float a, float b){
    return a*b;
}

int main (){

    float A, B, result;

    printf("Enter two float number");
    scanf("%f %f", &A, &B);

    result = multiply(A, B);

    printf("The answer is %.7f", result);

    return 0;
}  
