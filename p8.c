/*working of logical operators*/
#include<stdio.h>
void main()
{
    int a= 5, b= 5, c= 10, result;
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b): %d\n", result); //-> 1 (true)
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b): %d\n", result); //-> 0 (false)
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b): %d\n", result); //-> 1 (true)
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b): %d\n", result); //-> 0 (false)
    result = !(a < b);
    printf("!(a < b): %d\n", result); //-> 0 (false)
}