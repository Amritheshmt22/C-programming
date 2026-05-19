// Create a structure person having members person name ,citizen number, salary
// WAP to read and print single person deatils
#include<stdio.h>
#include<string.h>

struct Person {
    char name[50];
    int citNo ;
    float salary;
} Person1;

int main(){
    // assign value to name of  person
    strcpy(Person1.name, "ABC");
    // assign valuues too other person1 variables
    Person1.citNo = 1984;
    Person1.salary = 250000;
    // print struct variables
    printf("NAME : %s\n",Person1.name);
    printf("CITIZENSHIP NO : %d\n",Person1.citNo);
    printf("SALARY : %d\n", Person1.salary);
    return 0;
}