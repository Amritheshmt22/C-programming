/*assignment operator*/
#include<stdio.h>
void main()
{
    int a = 5, c;
    c = a; //-> c now holds the value of a (5)
    printf("c=%d\n",c);
    c += a; //-> c is now 10 (5 + 5)
    printf("c=%d\n",c); 
    c -= a; //-> c is now 5 (10 - 5)
    printf("c=%d\n",c);
    c *= a; //-> c is now 25 (5 * 5)
    printf("c=%d\n",c);
    c /= a; //-> c is now 5 (25 / 5)
    printf("c=%d\n",c);
    c %= a; //-> c is now 0 (5 % 5)
    printf("c=%d\n",c);
    
}