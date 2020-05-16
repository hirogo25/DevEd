#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Math.h>
#define SIZE 5

int items[5], front = -1, rear = -1;


void printQueue()
{
  printf("La serie quedo de la siguiente manera:\n");
  for(int x = front; x <= rear; x++)
  {
    printf("%d    ",items[x]);
  }
  printf("\n");

}

void enQueue(int value)
{
  if(rear < SIZE - 1)
  {
    if (front == -1)
    {
      front++;
    }
    rear++;
    items[rear] = value;
    printf("Se agrego correctamente el valor %d a la Queue \n",value);
    printQueue();

  }else   //Esto ocurre en caso de que rear no sea menor que el tamaño del arregloS
  {
    printf("El Queue está lleno\n");
  }
}

void deQueue()
{
  if (front != -1)
  {
    printf("Se eliminó el valor %d\n", items[front]);
    front++;
    printQueue();
    if(front > rear) //Si front es mayor que rear, signfica que ya no hubo más elementos en la fila
    {
      front = rear = -1; //Esta notación es válida para darle el mismo valor a 2 variables diferentes e una misma línea
                        //Se reinició el valor de ambas variables a -1, porque no quedan elementos en la fila

    }
  }else //Este else ocurre si el Queue se encuentra vacio
  {
    printf("El Queue se encuentra vacío \n");
  }
}




int main(int argc, char const *argv[]) {
  int addValue;
  char comparativo;
  printf("Bienvenido a la aplicacion de Filas\n\n");
  do
  {
    printf("Ingrese 'a' para agregar a la fila /'q' para extraer un valor/'s' para salir \n");
    scanf("%c", comparativo);
    switch(comparativo)
    {
      case 'a':
                printf("Ingrese numero:\n");
                scanf("%d",addValue);
                enQueue(addValue);
                break;
      case 'q':
                deQueue();
                break;
      case 's':
                printf("Salida del programa");
                break;
      default:
                printf("Valor invalido. Ingrese nuevamente.");
                break;

    }

  } while(comparativo != 's');
  return 0;
}
