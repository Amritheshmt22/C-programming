/*prog no 5*/
/*A customer buy 3 product. calculate total and average*/
#include <stdio.h>
void main()
{
    float p1, p2, p3, total, average;

    printf("Enter price of three products: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    total = p1 + p2 + p3;
    average = total / 3;

    printf("Total price: %.2f\n", total);
    printf("Average price: %.2f", average);
}