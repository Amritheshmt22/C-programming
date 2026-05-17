// write a prog of sum of digits of a given number using while loop

#include<stdio.h>

int main() {

    int num,digit,  sum = 0;

    printf("Enter a positive integer: ");

    scanf("%d", &num);                          //taking input number from user for which sum of digits is to be calculated

    while (num > 0) {                          //while loop to calculate the sum of digits until num becomes 0

        digit = num % 10;                     //in simple terms, getting the last digit of num by using modulus operator

        sum += digit;                         //adding the last digit to sum

        num /= 10;                            //in simple terms, removing the last digit from num by dividing it by 10 using integer division

    }                                          //%lld format specifier is used for long long int type, which is appropriate for sum variable to handle larger sums of digits
    printf("Sum of digits: %d", sum);
    return 0;
}