/*C program using pointers and functions to find the sum and average of three numbers*/
#include <stdio.h>

void calculate(int a, int b, int c) {
    int sum;
    float avg;

    // Pointers inside function
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    sum = *p1 + *p2 + *p3;
    avg = sum / 3.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}

int main() {
    int x, y, z;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);

    // Call by value
    calculate(x, y, z);

    return 0;
}
