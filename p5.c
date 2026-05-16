/*prog no 4*/
/*prog to swap number using temporary variable*/
#include <stdio.h>
void main()         
{
    double first,second,temp;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);  
    temp = first;
    first = second;
    second = temp;
    printf("After swapping: first = %.2lf, second = %.2lf", first, second);

}
/*without using the third variable*/
#include <stdio.h>
void main()
{
    double a,b;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);  
    a = a + b; //-> a now holds the sum of both numbers
    b = a - b; //-> b now holds the original value of a
    a = a - b; //-> a now holds the original value of b
    printf("After swapping: first = %.2lf, second = %.2lf", a, b );

}