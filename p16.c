//prog with using if else ladder

#include<stdio.h>
int main() {
    int n; // Example value, can be changed

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Positive");
    }
    else if (n < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
}