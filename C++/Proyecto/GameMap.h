#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"

class GameMap
{
public:
    GameMap();
    MapCell celdas[15][10];
    MapCell* playerCell;
     bool isGameOver;

    //Dibuja el mapa completo
    void drawMap();
    //Obtiene las coordenadas de Player y actualiza el mapa
    bool setPlayerCell(int playerX, int playerY); 

    void drawIntro();

    void drawVictory();

    


protected:
    void loadMapFromFile();
private:


};

#endif