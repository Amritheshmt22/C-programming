#include<stdio.h>
int var = 10;
int * ptr = &var;

int main() {
int * pc,c,d;
c = 5;
d = -15;
pc = &c;
printf("%d\n",c);
pc = &d;
printf("%d",*pc);
return 0;
}