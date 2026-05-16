// prog for checking the number is even or odd by using only if statement
#include<stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even");
    }
    if (num % 2 != 0) {
        printf("Odd");
    }
return 0;
}