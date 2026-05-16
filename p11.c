/*read the salary of employee and increase it by 10% using compound assignment operator*/
#include<stdio.h>
void main()
{
    float salary;
    printf("Enter the salary of employee: ");
    scanf("%f", &salary);
    salary += salary * 0.10; //-> increase salary by 10%
    printf("The new salary after 10%% increase is: %.2f", salary);
}