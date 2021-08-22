/*
apuntadores en C
*/
#include <stdio.h>
int main()
{
  int abc = 2;
  int *apt = &abc;

  printf("%p\n", apt);
  return 0;
}
