#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    printf("Select the type of triangle:\n");
    printf("1. Right-Angle Triangle\n");
    printf("2. Isosceles Triangle\n");
    printf("3. General Triangle\n");
    scanf("%d", &choice);

    double area;

    switch (choice) {
        case 1: {
            double base, height;
            printf("Enter base length: ");
            scanf("%lf", &base);
            printf("Enter height: ");
            scanf("%lf", &height);
            area = 0.5 * base * height;
            break;
        }

        case 2: {
            double base, side;
            printf("Enter base length: ");
            scanf("%lf", &base);
            printf("Enter side length: ");
            scanf("%lf", &side);
            area = 0.5 * base * sqrt(side*side-(base*base/4.0));
            break;
        }

        case 3: {
            double side1, side2, side3, s;
            printf("Enter the lengths of three sides:\n");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            s = (side1+side2+side3)/2;
            area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
            break;
        }

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("The area of the triangle is: %lf\n", area);

    return 0;
}
