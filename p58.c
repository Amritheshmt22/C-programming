//WAP of C program to read records of 3 different students in a having member name, roll and marks and displaying it.

#include<stdio.h>
 struct student{
    int rollno;
    char name[50];
    float marks;
};

int main(){
    struct student s[3];
    for(int i=0;i<3;i++){   
        printf("Enter the roll No, name and marks of student %d:",i+1);
        scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    printf("Inputed student details are:\n");
    for(int i=0;i<3;i++){
        printf("Name: %s\n",s[i].name);
        printf("Roll No: %d\n",s[i].rollno);
        printf("Marks: %f\n",s[i].marks);
    }
    return 0;
}
