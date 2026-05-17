//calculate average temperature of a week
#include <stdio.h>
int main()
{
    float temp[7], sum=0.0;
    int i;
    printf("Enter the temperature of 7 days: \n");
    for(i=0; i<7; i++)
    {
        printf("Day %d: ", i+1);
        scanf("%f", &temp[i]);
        sum += temp[i];
    }
    printf("\nAverage temperature of the week is: %.2fC\n", sum/7);
    return 0;
}