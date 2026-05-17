//find the highest mark scored by a student
#include <stdio.h>
int main()
{
    int marks[5], i, max;
    printf("Enter the marks of 5 students: \n");
    for(i=0; i<5; i++)
    {
        printf("student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    max = marks[0];
    for(i=1; i<5; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }
    printf("\nHighest mark scored by a student is: %d\n", max);
    return 0;
}
