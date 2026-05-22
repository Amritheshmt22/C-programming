// wap to read and display 2 employee details using union.
#include<stdio.h>
#include<string.h>

union Employee {
    int id;
   int age;
    float salary;
};

int main() {
    union Employee emp1, emp2;
    printf("Enter details for Employee 1 (ID, Age, Salary): ");
    printf("ID:");
    scanf("%d", &emp1.id);
    printf("Age:");
    scanf("%d", &emp1.age);
    printf("Salary:");
    scanf("%f", &emp1.salary);

    printf("\nEnter details for Employee 2 (ID, Age, Salary): ");
    printf("ID:");
    scanf("%d", &emp2.id);
    printf("Age:");
    scanf("%d", &emp2.age);
    printf("Salary:");
    scanf("%f", &emp2.salary);

    
    printf("\n--- Employee 1 Details ---\n");
    printf("ID: %d\n", emp1.id);
    printf("Age: %d\n", emp1.age);
    printf("Salary: %.2f\n", emp1.salary);

    
    printf("\n--- Employee 2 Details ---\n");
    printf("ID: %d\n", emp2.id);
    printf("Age: %d\n", emp2.age);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}