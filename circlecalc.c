#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0; 
    double area = 0.0;
    double circumference = 0.0; 
    double diameter = 0.0;
    const double pi = 3.14159; 
    double surface_area = 0.0;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    circumference = 2 * pi * radius;
    diameter = 2 * radius;
    surface_area = 4 * pi * pow(radius, 2);

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    printf("Diameter: %.2f\n", diameter);
    printf("Surface Area: %.2f\n", surface_area);

    return 0;
}