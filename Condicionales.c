/*
 Toma de Decisiones if
 operadores de Igualdad
 ==   x es igual que y
 !=   x es diferente que y

      Operaciones de Relacion
      >  x es mayor que y
      <  x es menor que y
      >= x es mayor o igual que y
      <= x es menor o igual que y
*/

#include <stdio.h>
int main()
{
  int edad;
  printf("ingresa tu edad\n");
  scanf("%d",&edad );
  if( edad >=18 )
  {
    printf("eres mayor de edad\n");
  }
  else if( edad ==17){
    printf("sorry bro, casi casi\n");
  }
  else{
    printf("eres menor de edad\n");
  }

  return 0;
}
