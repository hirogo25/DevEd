#include <stdio.h>
#include "mylib.h" //Se usan comillas para indicar que es una libreria que no es estándar

void hello (const char * name)
{
  printf("Hola %s\n", name);
}
