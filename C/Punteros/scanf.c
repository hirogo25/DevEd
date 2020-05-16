#include <stdio.h>

int main()
{
  int number;
  printf("Ingrese un número");
  scanf("%d", &number); //Se le pasa la dirección de memoria de la variable number
  printf("Usted ingresó %d\n", number);
}
