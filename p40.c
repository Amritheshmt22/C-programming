/*simple C program using pointers to find the largest of two numbers*/
#include <stdio.h>

void findLargest(int a, int b) {
    int *p1 = &a;
    int *p2 = &b;

    if (*p1 > *p2) {
        printf("Largest number = %d\n", *p1);
    } else if (*p2 > *p1) {
        printf("Largest number = %d\n", *p2);
    } else {
        printf("Both numbers are equal\n");
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Call by value
    findLargest(num1, num2);

    return 0;
}
