/*
Estructuras en C
*/
#include <stdio.h>
struct perro
{
  char nombre [30];
  int edadmeses;
  float peso;
}perro1={"chikorita",10,3.50};
int main()
{
  printf("el peso de: %s es de %.2f  kg y tiene %i meses\n",perro1.nombre,perro1.peso,perro1.edadmeses);
  return 0;
}
