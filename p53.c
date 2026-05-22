// Basic program using structure (store & display data) 2 students
#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};

int main(){
    struct student s1,s2;
    printf("Enter the roll No:");
    scanf("%d",&s1.rollno);
    printf("Enter the name:");
    scanf("%s",&s1.name);
    printf("Enter the marks:");
    scanf("%f",&s1.marks);
    printf("\nStudent Details ->\n");
    printf("\nRoll No: %d\n",s1.rollno);
    printf("\nName: %s\n",s1.name);
    printf("\nMarks: %f\n",s1.marks);

    printf("Enter the roll No:");
    scanf("%d",&s2.rollno);
    printf("Enter the name:");
    scanf("%s",&s2.name);
    printf("Enter the marks:");
    scanf("%f",&s2.marks);
     printf("\nStudent Details ->\n");
    printf("\nRoll No: %d\n",s1.rollno);
    printf("\nName: %s\n",s1.name);
    printf("\nMarks: %f\n",s1.marks);
    printf("\nRoll No: %d\n",s2.rollno);
    printf("\nName: %s\n",s2.name);
    printf("\nMarks: %f\n",s2.marks);
    return 0;
}