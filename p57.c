#include<stdio.h>
#include<string.h>

//struct with typedef person
typedef struct person{
    char name[50];
    int age;
    float salary;
} person;

int main(){
    struct person p1;
    printf("Enter name: ");
    scanf("%s", p1.name);   

    printf('Enter the age:');
    scanf('%d', &p1.age);

    printf('Enter the salary:');
    scanf('%f', &p1.salary);
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Salary: %f\n", p1.salary);

    struct person p2;
    printf("Enter name: ");
    scanf("%s", p2.name );

    printf("Enter the age:");
    scanf('%d', &p2.age);

    printf("Enter the salary:");
    scanf('%f', &p2.salary);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p2.name);  
    printf("Age: %d\n", p2.age);
    printf("Salary: %f\n", p2.salary);
    return 0;
}
