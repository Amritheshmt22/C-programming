//prog to find university assign grade based on marrks using if else ladder
//90-100 A
//75-89 B
//60-74 C
//50-59 D
//0-49 F

#include<stdio.h>
int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: A");
    }
    else if (marks >= 75 && marks < 90) {
        printf("Grade: B");
    }
    else if (marks >= 60 && marks < 75) {
        printf("Grade: C");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Grade: D");
    }
    else if (marks >= 0 && marks < 50) {
        printf("Grade: F");
    }
    else {
        printf("Invalid marks entered.");
    }
    
    return 0;
}