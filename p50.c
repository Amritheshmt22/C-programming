// Create a structure person having members person name ,citizen number, salary
// WAP to read and print  person deatils
#include<stdio.h>
#include<string.h>

struct Person {
    char name[50];
    int citNo ;
    float salary;
};

int main(){
    struct Person Person1;
    // assign value to name of  person
    strcpy(Person1.name, "ABC");
    // assign valuues too other person1 variables
    Person1.citNo = 1984;
    Person1.salary = 250000;
    // print struct variables
    printf("NAME : %s\n",Person1.name);
    printf("CITIZENSHIP NO : %d\n",Person1.citNo);
    printf("SALARY : %f\n", Person1.salary);

    struct Person Person2;
    // assign value to name of  person
    strcpy(Person2.name, "EFG");
    // assign valuues too other person1 variables
    Person2.citNo = 1985;
    Person2.salary = 280000;
    // print struct variables
    printf("NAME : %s\n",Person2.name);
    printf("CITIZENSHIP NO : %d\n",Person2.citNo);
    printf("SALARY : %f\n", Person2.salary);

    return 0;
}