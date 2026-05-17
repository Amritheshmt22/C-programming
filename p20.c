//write a prog to find the factorial of given number using while loop

#include<stdio.h>
int main() {

    int num;                                    //variable to store the input number for which factorial is to be calculated
    unsigned long long factorial = 1;           //using unsigned long long to handle large factorial values


    printf("Enter a positive integer: ");

    scanf("%d", &num);

    int i = 1;                                  //initializing i to 1 for factorial calculation

   while (i <= num) {                           ///while loop to calculate factorial until i is less than or equal to num

        factorial *= i;                         //multiplying factorial by i to calculate the factorial of num

        i++;                                    //incrementing i to eventually reach num
    }

    printf("Factorial: %llu", factorial);       //printing the calculated factorial value using %llu format specifier for unsigned long long
    
    return 0;
}