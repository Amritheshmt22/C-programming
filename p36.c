//address of variable
#include<stdio.h>
int var = 10;
int * ptr = &var;

int main() {
int * pc,c;
c = 5;
pc = &c;
c = 1;
printf("%d\n",c);
printf("%d",*pc);
return 0;
}