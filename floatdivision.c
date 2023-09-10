#include <stdio.h>

float divide(float a, float b){
    return a/b;
}

int main (){

    float A, B, division;

    printf("Enter two float number");
    scanf("%f %f", &A, &B);

    division = divide(A, B);

    printf("The answer is %.7f", division);

    return 0;
}  
