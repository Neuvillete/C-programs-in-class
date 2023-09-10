#include <stdio.h>

int area(int a) {
    return a*a;
}

int main() {
    int A, result;

    printf("Enter the side of square");
    scanf("%d", &A);

    result = area(A);

    printf("The area of the square is %d", result);

    return 0;
}
