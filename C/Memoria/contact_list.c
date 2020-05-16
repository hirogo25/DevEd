#include <stdio.h>
#include <stdlib.h>
#include <String.h>

typedef char NAME[100];
typedef char EMAIL[100];

typedef struct
{
  NAME name;
  EMAIL email;
} CONTACT;

int main(int argc, char const * argv[]) {
  CONTACT * list = NULL;
  char buffer[100];
  int goOn, listSize = 0;
  do
  {
    printf("Ingrese el nombre del nuevo Contacto (0 para terminar): \n");
    scanf("%99s", buffer); //%99s asegura que el número de caracteres no sobrepasen los 99, para el límite del arreglo char de 100
    if(strcmp("0", buffer) != 0)
    {
      if (!list) //list es NULL, esta condicional indica una negación (negación de 0 es Verdadero)
      {
        list = malloc(sizeof(CONTACT)); //Indicamos cuanta memoria queremos reservar. En este caso, reserva lo suficiente para guardar un CONTACT completo
      } else                            //Malloc reserva espacio para algo que no se le ha reservado nada
      {
        list = realloc(list, sizeof (CONTACT) * (listSize + 1)); //Realloc toma lo que ya hay y agranda el espacio. Se debe de realizar un malloc antes
      }
      strcpy(list[listSize].name, buffer);
      printf("Ingrese el Email de %s:\n", buffer);
      scanf("%99s", buffer);
      strcpy(list[listSize].email, buffer);
      goOn = 1;
      listSize++;
    }else
    {
      goOn = 0;
    }
  } while(goOn);

  printf("Esta es tu lista de contactos: \n\n\n");
  printf("Nombre\t\tEmail\n\n"); //\t agrega tabulaciones a la cadena de texto

  for(int i = 0; i < listSize; i++)
  {
    printf("%s\t\t$s\n", list[i].name, list[i].email);
  }
  free(list); //Esta función libera la memoria que se reservó para la instancia de struct list
  return 0;
}
