#include <stdio.h>

int main()
{
  int number = 109;
  int * pointToNumber = &number; // Caracter * previo al nombre de la variable indica que será una variable puntero
                      // También se debe de definir que tipo de variable se estará apuntando, en este caso, integer

  printf("%p, %d\n", pointToNumber, *pointToNumber);  // *pointToNumber sirve para tener acceso al contenido de la variable indicada por el puntero, no al puntero en si
}
