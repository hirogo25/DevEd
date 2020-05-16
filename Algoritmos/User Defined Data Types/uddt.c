#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct client
{
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
{
  struct client client1 = {0};
  strcpy(client1.Name, "Camilo Valencia");
  strcpy(client1.Id, "0000000001");
  client1.Credit = 1000.00;
  strcpy(client1.Address, "Calle del Encino, 135, Leon de los Aldama");

  printf("El nombre del Cliente es: %s\n",client1.Name);
  printf("El ID del cliente es: %s\n", client1.Id);
  printf("El Crédito del cliente es: %f\n", client1.Credit);
  printf("La Direccion del Cliente es: %s\n", client1.Address);
  return 0;
}
