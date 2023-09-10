#include <stdio.h>

int area(int lenght, int width) {
    return lenght*width;
}

int main() {

    int A, B , result;

    printf("Enter the value of A and B");
    scanf("%d %d", &A,&B);

    result = area(A, B);

    printf("The area of rectangle is %d", result);

    return 0;
}

