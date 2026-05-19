/*C program using pointers and functions to compute the area of a circle, rectangle, and
Triangle */
#include <stdio.h>

// Function for area of circle
float areaCircle(float r) {
    return 3.14 * r * r;
}

// Function for area of rectangle
float areaRectangle(float l, float b) {
    return l * b;
}

// Function for area of triangle
float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, breadth, base, height;
    float area;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = areaCircle(radius);
    printf("Area of Circle = %.2f\n", area);

    // Rectangle
    printf("\nEnter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = areaRectangle(length, breadth);
    printf("Area of Rectangle = %.2f\n", area);

    // Triangle
    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    area = areaTriangle(base, height);
    printf("Area of Triangle = %.2f\n", area);

    return 0;
}
