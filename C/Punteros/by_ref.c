#include <stdio.h>

void duplicar(int * a) //Aquí se solicita el contenido de la dirección de memoria donde está la variable a
{
  *a *= 2; //Lo que esté apuntado por a se multiplica por 2 (*)
}

int main()
{
  int a = 5;
  printf("Antes de duplicar a = %d\n ", a);
  duplicar(&a); //No enviamos la variable a, sino la dirección en memoria de a
  printf("Después de duplicar a = %d\n ", a);
}

//A esto se le conoce como Pasaje por Referencia (Uso de Punteros)
