/*
Arreglos en C
*/
#include <stdio.h>
int main(){
  //col ..0 1 2
  //file0|5 3 1
  //file1|6 4 2
  int multi[2][3] = {{5,3,1},{6,4,2}};
  printf("%i\n",multi[0][2]); //fila 0 columna 2 (el numero 1)


/*  int sizeA;
  printf("tamaño del arreglo\n");
  scanf("%i",&sizeA );
  int age[sizeA];
  for(int i = 0; i <=sizeA;i++)
  {
    printf("ingresa el valor %i\n", i+1);
    scanf("%i",&age[i]);
  }
  printf("los valores del arreglo son:\n");
  for(int i = 0; i < sizeA;i++)
  {
    printf("%i-\n",age[i]);
  }
  printf("\n");
  */
  return 0;
}
