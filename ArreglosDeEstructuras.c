/*
Arreglos de estructuras en c
*/
#include <stdio.h>
struct perro
{
  char nombre [30];
  int edadmeses;
  float peso;
}perros[2];
int main()
{
  for (int i = 0; i < 2; ++i)
  {
    printf("ingresa el nombre del perro\n");
    scanf("%s",perros[i].nombre);
    printf("ingresa la edad del perro\n");
    scanf("%i",&perros[i].edadmeses);
    printf("ingresa el peso del perro\n");
    scanf("%f",&perros[i].peso);
  }

  for (int i = 0; i < 2; ++i)
  {
    printf(" %i El nombre de perro es %s\n",i+1,perros[i].nombre);
    printf(" %i La edad del perro es %i\n",i+1,perros[i].edadmeses);
    printf(" %i El peso de perro es %.2f\n",i+1,perros[i].peso);
  }
  return 0;
}
