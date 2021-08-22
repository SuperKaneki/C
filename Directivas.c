/*
    Directivas del Preprocesador
*/
#include <stdio.h>
//#include "nombre del archivo"
#define PI 3.14159
#define Cubo(a) a*a*a
int main(){
   // int suma;
   // suma = PI + 3;
   int a = 3;
   printf("el cubo de la variable a es : %i\n",Cubo(a));
  return 0;
}
