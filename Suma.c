#include <stdio.h>
int main(){
  int num1,num2,resultado;
  printf("escribe un numero\n");
  scanf("%d", &num1);
  printf("escribe otro numero\n");
  scanf("%d", &num2);
  resultado = num1 + num2;
  printf("%d\n", resultado);
  return 0;
}
