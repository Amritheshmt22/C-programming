/*working of reltaionaln operator*/
#include<stdio.h>
void main()
{
    int a= 5, b= 5, c= 10;
    printf("a == b: %d\n", a == b); //-> 1 (true)
    printf("a == c: %d\n", a == c); //-> 0  (false)
    printf("a != c: %d\n", a != c); //-> 1  (true)
    printf("a > c: %d\n", a > c);   //-> 0  (false)
    printf("a < c: %d\n", a < c);   //-> 1  (true)
    printf("a >= b: %d\n", a >= b); //-> 1 (true)
    printf("a <= c: %d\n", a <= c); //-> 1 (true)
}