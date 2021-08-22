/*
Funciones Recursivas
*/
#include <stdio.h>
long Factorial(long num);
int main(){
  /*
  Ejemplo del Factorial de Un número
  5! = 5*4*3*2*1 o 5*4! = 120
  4! = 4*3*2*1 o 4*3! = 24
  3! = 3*2*1 o 3*2! = 6
  2! = 2*1 o 2*1! =2
  1! = 1
  0! = 1
  */
  int num;
  printf("ingresa un numero\n");
  scanf("%i",&num);
  for(int i = 0; i <= num; i++)
  {
    printf("%ld\n",Factorial(i));
  }
  return 0;
}
long Factorial(long num)
{
  if (num <= 1)
  {
    return 1;
  }else{
    return(num * Factorial(num-1));
  }
}
