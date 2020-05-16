#include <stdio.h>
#include <String.h>

int main()
{ }

  char * src = "Hiram";
  char dst[20] = "Cadena provisional";
  strcpy(dst, src); //Función que copia el contenido de una cadena en otra variable
  printf("dst =  %s\n",dst);
  return 0;
}
