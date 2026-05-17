//Write a program to find the average of 6 subjects marks of a student using an array.
#include <stdio.h>
float findAverage(float marks[], int size){
    float sum = 0;
    for(int i = 0; i < size; i++){
       sum += marks[i];
    }
    return sum / size;
}

int main() {
    float marks[]= {100, 100, 100, 100, 100, 100};
    int n = sizeof(marks) / sizeof(marks[0]);
    float average = findAverage(marks, n);
    printf("Average marks: %.2f\n", average);
    return 0;
}

