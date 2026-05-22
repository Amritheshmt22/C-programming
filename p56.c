#include<stdio.h>

struct Student{
    int rollno;             
    char name[50];
    float marks;
};
int main(){
    struct Student s;
    printf("Enter the roll number: ");
    fflush(stdout);
    scanf("%d",&s.rollno);
    printf("Enter the name: ");
    fflush(stdout);
    scanf("%s",s.name);
    printf("Enter the marks: ");
    fflush(stdout);
    scanf("%f",&s.marks);
    printf("\n--- Student Details ---\n");
    printf("Roll number : %d\n",s.rollno);
    printf("Name : %s\n",s.name);
    printf("Marks : %f\n",s.marks);
    return 0;
}