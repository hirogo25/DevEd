#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
  FILE * fp = fopen(argv[1], "r"); //fopen abre archivos; Parámetros: archivo, modo en que se abre el archivo
  char c;

  while ((c = fgetc(fp)) != EOF) //fgetc obtiene 1 carcater de un archivo que esté abierto
  {
    printf("%c", c);
  }
  fclose(fp); //Se cierra archivo y se liberan los recursos que el archivo estaba utilizando
  return 0;
}
