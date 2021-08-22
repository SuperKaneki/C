/*
apuntadores en C
    "llamada por apuntadores"
*/
#include <stdio.h>
void cubo(int *n);
int main()
{
  int num = 5;
  printf("%i\n", num);
  cubo(&num);
  printf("%i\n",num);
  return 0;
}
void cubo(int *n)
{
  *n = *n * *n * *n;
}
