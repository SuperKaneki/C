#include <stdio.h>
#define CUBO(a) a*a*a
int main(){
  int a;
  printf("ingrese un numero para saber su CUBO\n");
  scanf("%i",&a);
  printf("%i\n",CUBO(a));

  return 0;
}
