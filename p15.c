// program to find the largest amongthe two fractional  numbers

#include<stdio.h>
int main()
{
    float num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%f %f", &num1, &num2);
    if (num1 > num2) {
        printf("The largest number is %.3f", num1);
    }
    else {
        printf("The largest number is %.3f", num2);
    }
    return 0;
}