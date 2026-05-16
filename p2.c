/*prog no 2*/
/*prog to calculate percentage of three subjects*/
#include <stdio.h>
void main()
{
    int m1, m2, m3, total;
    float percentage;

    m1 = 85;
    m2 = 90;    
    m3 = 80;
    total = m1 + m2 + m3;
    percentage = (total / 300.0) * 100;
    printf("The percentage is %.2f%%", percentage);
}