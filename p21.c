//write a simple prog all 1 to 10 all natural numbers using while loop

#include<stdio.h>
int main() {
    int i = 1;                                  //initializing i to 1 to start printing natural numbers from 1
    printf("Natural numbers from 1 to 10: ");
    while (i <= 10) {                           //while loop to print natural numbers until i is less than or equal to 10
        printf("%d ", i);                       //printing the current value of i followed by a space
        i++;                                    //incrementing i to eventually reach 10
    }
    return 0;
}

