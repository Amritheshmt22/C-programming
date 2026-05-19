// Basic program using structure (store & display data)
#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};

int main(){
    struct student s;
    printf("Enter the roll No:");
    scanf("%d",&s.rollno);
    printf("Enter the name:");
    scanf("%s",&s.name);
    printf("Enter the marks:");
    scanf("%f",&s.marks);
    printf("\nStudent Details ->\n");
    printf("\nRoll No: %d\n",s.rollno);
    printf("\nName: %s\n",s.name);
    printf("\nMarks: %f\n",s.marks);
    return 0;
}