#include <stdio.h>
#include <stdlib.h>

void cambiarPos(int *n1, int *n2)
{
  int temporal = *n1;
  *n1 = *n2;
  *n2 = temporal;
}

void bubblesort(int vector[], int n)
{
  int i, j;
  for(i=0;i < n-1; i++) //i posición del vector actual
  {
    for(j=0; j < n - i - 1; j++)  //
    {
      if(vector[j] > vector[j+1]) //Ejecuta si valor en j es mayor que posicion j+1
      {
        cambiarPos(&vector[j], &vector[j+1]);
      }
    }
  }
}

int print(int vector[], int n)
{
  int i;
  for(i=0; i<n-1; i++)
  {
    printf("%d ,", vector[i]);
  }
  printf("\n   Fin del Ordenamiento \n");
}


int main(int argc, char const *argv[])
{
  int vector[] = {100, 200, 36, 84,27,150,67,42};
  int n = sizeof(vector)/sizeof(vector[0]);
  bubblesort(vector, n);
  print(vector, n);
  return 0;
}
