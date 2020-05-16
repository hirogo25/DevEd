#include <stdio.h>
#include <stdlib.h>

typedef struct Node   //Creamos la estructura tipo Nodo
{
  int number;         //Este es el valor contenido en el Nodo
  struct Node * next; //Autorreferencia de la struct; este será el apuntador al siguiente Nodo
} NODE;

NODE * createNode(int number)  //Función para crear nodos nuevos
{
  NODE * newNode;
  newNode = malloc(sizeof(NODE));
  newNode->next = NULL;
  newNode->number = number;

  return newNode;
}

int main(int argc, char const * argv[])
{
  NODE * start = NULL, * current, * next; //Puntero de Inicio y el Current que recorre la lista. Al crear la Lista, start no debe ser modificado NUNCA
  char goOn;
  int listSize = 0, number;
  do
  {
      printf("La lista contiene %d Nodos. Agregue un nuevo Numero (0 para finalizar)\n", listSize);
      scanf("%d",&number);
      if (number)  //Si es diferente de 0 (True) crea el nodo; si es 0 (false), entra al else
      {
        if(!start) //Si Start está vacío, el Puntero Start inicia en el primer Nodo
        {
          start = createNode(number);
        } else  //Este else ocurre si la lista tiene aunque sea un Nodo creado
        {
          current = start;
          while (current->next) //Continua si el Next del Nodo actual no apunta a NULL(último Nodo)
          {
            current = current->next;  // Current se transforma en el Nodo del Apuntador(next) del Nodo Actual
          }
          current->next = createNode(number); //EL Apuntador del último Nodo lo asigna a la dirección del nuevo Nodo
        }
        goOn = 1;
        listSize++;
      } else
      {
        goOn = 0;
      }
  }while (goOn);
  current = start;
  printf("La lista contiene los numeros:\n\n");
  while (current)
  {
    printf("%d", current->number);
    printf(current->next ? "," : "\n");
    current = current->next;
  }

// Código para eliminar un número de la Lista anteriormente creada
  int valor;
  NODE * inicio = start, * actual, * anterior, * nodoLib;
  do
  {
    printf("¿Deseas eliminar algun numero de la lista? (0 para descartar)\n");
    scanf("%d", &valor);
    goOn = 1;
    actual = inicio;
    anterior = inicio;
    if (valor) //Verifica si el Comparador no es 0
    {
      do
      {
        if (valor == actual->number) //Condicional que ocurre si el Valor a eliminar coincide con el Nodo Actual
        {
          if(actual->next == inicio->next) //Si actual e inicio son el mismo, es porque es el Primer Nodo
          {
            nodoLib = actual;
            actual = actual->next;
            free(nodoLib);
            inicio = actual;
            anterior = actual;
          } else        //Este else ocurre si el nodo Actual no es el primer Nodo de la lista
          {
            nodoLib = actual;
            actual = actual->next;
            free(nodoLib);
            anterior->next = actual;
          }
        } else
        {
          anterior = actual;
          actual = actual->next;
        }
      } while (actual);
      current = start; //Codigo para desplegar como quedaría la nueva Lista
      printf("La lista ahora contiene los numeros:\n");
      while (current)
      {
        printf("%d", current->number);
        printf(current->next ? "," : "\n");
        current = current->next;
      }
    }else
    {
      goOn = 0;
    }
  } while (goOn);

/*
  current = start;
  while (current) //Este ciclo es para recorrer todos los Nodos e irlos liberando uno por uno
  {
    next = current->next;
    free(current);
    current = next;
  } */
  return 0;
}
