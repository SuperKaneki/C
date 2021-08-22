#include <stdio.h>
int main(){
  char op;
  double firtsnumber, secondnumber;
  printf("ingresar un operador(+,-,*,/)\n");
  scanf("%c", &op);
  printf("colocar los numeros\n");
  scanf("%lf %lf", &firtsnumber, &secondnumber);

  switch (op) {
    case '+':
    printf("%.1lf + %.1lf = %.1lf", firtsnumber, secondnumber, firtsnumber + secondnumber);
    break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf", firtsnumber, secondnumber, firtsnumber - secondnumber);
    break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf", firtsnumber, secondnumber, firtsnumber * secondnumber);
    break;
    case '/':
    printf("%.1lf / %.1lf = %.1lf", firtsnumber, secondnumber, firtsnumber / secondnumber);
    break;
    default:
    printf("calculo incorrecto");
  }
  return 0;
}
