/*
utilizar Switch en C
*/
#include <stdio.h>
int main()
{
  int casos;
  printf("ingresa un numero de 1 al 5\n");
  scanf("%i",&casos);
  switch(casos)
  {
    case 1:
    printf("elegiste el primer caso\n");
    break;

    case 2:
    printf("elegiste el segundo caso\n");
    break;

    case 3:
    printf("elegiste el tercer caso\n");
    break;

    case 4:
    printf("elegiste el cuarto caso\n");
    break;

    case 5:
    printf("elegiste el quinto caso\n");
    break;

    default:
    printf("no encontramos tu caso\n");
    break;
  }
  return 0;
}
