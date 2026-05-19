/*C program to find factorial using pointers with call by value*/

#include <stdio.h>

void factorial(int n) {
    int fact = 1;

    // Pointer inside function
    int *p = &n;

    for(int i = 1; i <= *p; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d\n", fact);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Call by value
    factorial(num);

    return 0;
}