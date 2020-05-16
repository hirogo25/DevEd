#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Contendiente
{
  char Name[50];
  char Class[15];
  int Level;
  int LifePoints;
  int Mana;
  int Energy;
};

int main(int argc, char const *argv[]) {
  struct Contendiente player1 = {0};

  strcpy(player1.Name, "Devil Cordegrey");
  strcpy(player1.Class, "Assassin");
  player1.Level = 1;
  player1.LifePoints = 135;
  player1.Mana = 45;
  player1.Energy = 110;

  printf("Un nuevo Contendiente de la clase %s se ha unido: %s\n\n", player1.Class ,player1.Name);
  printf("Sus Estadisticas son:\n\n");
  printf("Nivel: %d\n", player1.Level);
  printf("Puntos de Vida: %d\n", player1.LifePoints);
  printf("Mana: %d\n", player1.Mana);
  printf("Energia: %d\n", player1.Energy);

  return 0;
}
