#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[100];
    unsigned int age; //unsigned significa que la variable no acepta signos, por lo que no acepta numeros negativos
};

int main(int argc, char const *argv[])
{
  FILE * out;
  char buffer[100];

  if (argc < 2)
  {
    printf("indique el nombre del archivo de salida \n");
    return -1;
  }
  if(!(out = fopen(argv[1], "w")))
  {
    printf("No puedo escribir en el archivo %s\n", argv[1]);
    return -2;
  }
  struct person p;

  do {
      printf("Ingrese el nombre de la persona: ");
      scanf("%99s", &(p.name));
      printf("Ingrese la edad de la persona: ");
      scanf("%d", &(p.age));
      fwrite(&p, sizeOf(struct persona), 1, out);  //fwrite escribe en el archivo en binario
                                               // indicamos de parametros: puntero a variable, tamaño a almacenar, ??, archivo donde se guardará
      printf("Persona Guardada\n ¿Deseas guardar otra s/n?");
      scanf("%1s", buffer);
  } while(buffer[0] != 'n');

  fclose(out);
  return 0;
}
