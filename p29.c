//FUNCTION call

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
  int result = add(5, 3);
  printf("The sum of numbers is %d\n", result);
  return 0;
}
