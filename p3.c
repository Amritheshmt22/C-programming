/*prog no 3*/
/*prog_2 but using scanf*/
#include <stdio.h>
void main()         
{
    int m1, m2, m3, total;
    float percentage;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = (float)total / 3;

    printf("Total marks: %d", total); 
    printf("The percentage is %.2f%%", percentage);
}