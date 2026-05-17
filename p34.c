//in a hospital n number of patients ,count the number of patients who are 60 years of age, using an array.
#include <stdio.h>
int cp60(int age[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(age[i] > 60){
            count++;
        }
    }
    return count;
}
int main() {
    int n[] = {60, 70, 80, 60, 90, 60};
    int size = sizeof(n) / sizeof(n[0]);
    printf("Number of patients who are more than  60 years of age: %d\n", cp60(n, size));
    return 0;
}