/*
Operador Size Of en C
*/
#include <stdio.h>
size_t getsize(float *ptr);
int main()
{
  float array[20];
  printf("el numero de bytes del array es: %lu\n",sizeof(array));
  printf("el numero de bytes devuelto por getsize es: %lu\n",getsize(array) );
  return 0;
}
size_t getsize(float *ptr)
{
  return sizeof(ptr);
}
