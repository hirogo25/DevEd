#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Math.h>

int main(int argc, const char * argv[])
{
  int a, b;
  a = atoi(argv[1]); //atoi convierte el valor de un String en su valor numérico entero
  b = atoi(argv[2]);

  printf("La hipotenusa mide %2f", sqrt(pow(a,2) + pow (b,2)));

  return 0;
}
