/*C program using pointers and a function (call by value) to compute the sum of natural numbers*/
#include <stdio.h>

// Function (call by value)
int sumNatural(int n) {
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;  // returns result to main
}

int main() {
    int num;
    int result;
    int *ptr;   // pointer variable

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    ptr = &num;  // pointer stores address of num

    // Call by value (passing value of *ptr)
    result = sumNatural(*ptr);

    printf("Sum of first %d natural numbers is = %d\n", *ptr, result);

    return 0;
}