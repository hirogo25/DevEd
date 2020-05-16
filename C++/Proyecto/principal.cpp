#include <iostream>
#include "Player.h"
#include "Player.cpp"
#include "MapCell.h"
#include "MapCell.cpp"
#include "GameMap.h"
#include "GameMap.cpp"

using namespace std;

int main()
{
    char userInput = ' ';
    GameMap mapa;
    mapa.drawIntro();
    mapa.drawMap();

    Player Heroe; //Podemos omitir los parentesis del constructor para usar el constructor estandar sin parametros
  
    while(mapa.isGameOver == false)
    {
        //Heroe.currentPos();
        Heroe.callInput();

        //La condicional que indica si se actualizara la posicion del jugador
        if(mapa.setPlayerCell(Heroe.x, Heroe.y))
        {
            //Aqui dibujamos el mapa con el Player que se movio a una posicion permitida
            mapa.drawMap();
            Heroe.currentPos();
        } else
        {
            //Else ocurre si la posicion a la que quiere mover al Player esta bloqueada
            Heroe.resetToSafePosition();
            //Aqui dibujamos el mapa con el Player en la ultima posicion segura
            mapa.drawMap();
            Heroe.currentPos();
        }
    }
    return 0;
}