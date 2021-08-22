#include <stdio.h>
int main(){
  char C = 'y'; //tamaño de 1 byte rango de 0...255
  int a = 20; //2 bytes -32768 ... 32767
  short e = -1; //2 bytes -128 ... 127
  unsigned int u = 25; //2 bytes 0 ... 65535  se puede combinar con otros tipos de datos
  long l = 5932; //4 bytes -2147483648 ... 2147483647
  float f = 72.534; //4 bytes rango muy amplio
  double d = 12323.877658; //8 bytes incluso más amplio que float
  printf("\n",);
  return 0;
}
