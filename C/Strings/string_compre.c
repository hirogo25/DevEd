#include <stdio.h>
#include <String.h>

int main()
{
  char * name = "Hiram";
  char * otherName = "Judas";
  printf("Los nombres son %s\n", strcomp(str, otherName) == 0 ? "iguales" : "distintos");
  // -> Función que compara 2 cadenas de texto y devuelve 0 si las cadenas son iguales
  return 0;
}
