#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, resultado = 1;
  for(int x = 1; x<8;x++)
  {
    resultado = resultado * x;
  }
  printf("El factorial de 7 es: %d\n", resultado);
  return 0;
}
