// wap to read the 3 different student in union having member name, roll no and marks.
#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main(){
    printf("Enter details for Student 1 : ");
    struct Student student1;
    printf("Name:");
    scanf("%s", student1.name);
    printf("Roll No:");
    scanf("%d", &student1.rollNo);
    printf("Marks:");
    scanf("%f", &student1.marks);
    
    printf("\nEnter details for Student 2 : ");
    struct Student student2;
    printf("Name:");
    scanf("%s", student2.name);
    printf("Roll No:");
    scanf("%d", &student2.rollNo);
    printf("Marks:");
    scanf("%f", &student2.marks);

    printf("\nEnter details for Student 3 : ");
    struct Student student3;
    printf("Name:");
    scanf("%s", student3.name);
    printf("Roll No:");
    scanf("%d", &student3.rollNo);
    printf("Marks:");
    scanf("%f", &student3.marks);

    printf("\n--- Student 1 Details ---\n");
    printf("Name: %s\n", student1.name);    
    printf("Roll No: %d\n", student1.rollNo);
    printf("Marks: %.2f\n", student1.marks);

    printf("\n--- Student 2 Details ---\n");
    printf("Name: %s\n", student2.name);
    printf("Roll No: %d\n", student2.rollNo);
    printf("Marks: %.2f\n", student2.marks);

    printf("\n--- Student 3 Details ---\n");
    printf("Name: %s\n", student3.name);
    printf("Roll No: %d\n", student3.rollNo);
    printf("Marks: %.2f\n", student3.marks);

    return 0;
}