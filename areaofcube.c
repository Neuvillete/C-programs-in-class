#include <stdio.h>

int main() {
    double side;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);

    double surfaceArea = 6 * side * side;
    double volume = side * side * side;

    printf("Surface Area of the cube: %.2lf\n", surfaceArea);
    printf("Volume of the cube: %.2lf\n", volume);

    return 0;
}
