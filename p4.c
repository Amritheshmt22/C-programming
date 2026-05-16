/*prog no 3*/
/*How to calcuate the percentage Data type size*/
#include <stdio.h>
int main()         
{
    printf("Size of int: %lu bytes\n", sizeof(int)); //-> %lu is used for unsigned long,which is the type returned by sizeof
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));  
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0;
}