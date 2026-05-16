// program to find number is even opr odd by using only if else statement
#include<stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even", num);
    }
    else {
        printf("%d is Odd", num);
    }
    return 0;
}