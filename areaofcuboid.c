#include <stdio.h>

double surfaceArea(double length, double width, double height) {
    return 2 * (length * width + width * height + height * length);
}

double volume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double length, width, height;
    
    printf("Enter the length of the cuboid: ");
    scanf("%lf", &length);
    
    printf("Enter the width of the cuboid: ");
    scanf("%lf", &width);
    
    printf("Enter the height of the cuboid: ");
    scanf("%lf", &height);
    
    double surfacearea = surfaceArea(length, width, height);
    double volumeofcuboid = volume(length, width, height);
    
    printf("Surface Area of the cuboid: %.2lf\n", surfacearea);
    printf("Volume of the cuboid: %.2lf\n", volumeofcuboid);
    
    return 0;
}

