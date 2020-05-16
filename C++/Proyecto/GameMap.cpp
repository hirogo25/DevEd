#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    playerCell = NULL;
    loadMapFromFile();
    bool isGameOver = false;

}

void GameMap::drawMap()
{
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << celdas[i][j].id;
        }
        cout << endl;
    }
}

bool GameMap::setPlayerCell(int playerX, int playerY)
{
    if(celdas[playerY][playerX].isBlocked() == false) 
    {   
        if(celdas[playerY][playerX] == '$')
        {
            
        }
        else
        {
            if(playerCell != NULL)
            {
                playerCell->id = 0;
            }
                playerCell = &celdas[playerY][playerX];
                playerCell->id = '3';  //La flecha se usa cuando se quiere modificar el atributo de la variable señalada por el Apuntador
                return true;
            } else
            {
                return false;
            }

        }
        


}

void GameMap::drawIntro()
{
    string linea;
    int fila = 0;
    ifstream myFile("intro.txt");
    if(myFile.is_open())
    {
        while(getline(myFile,linea))
        {
           cout << linea << endl;
        }
        cin >> linea;
    } else
    {
        cout << "Fatal error. Map file could not be load" << endl;
    }
}

oid GameMap::drawVictory()
{
    string linea;
    int fila = 0;
    ifstream myFile("victory.txt");
    if(myFile.is_open())
    {
        while(getline(myFile,linea))
        {
           cout << linea << endl;
        }
        isGameOver = true;
        cin >> linea;
    } else
    {
        cout << "Fatal error. Map file could not be load" << endl;
    }
}


void GameMap::loadMapFromFile()
{   /*
    ofstream fileCreated("mapa.txt");
    
    if(fileCreated.is_open())
    {

    } else
    {
        cout << "FATAL ERROR: Map could not be created" << endl;
    }
    */
    string linea;
    int fila = 0;
    ifstream myFile("mapa.txt");
    if(myFile.is_open())
    {
        while(getline(myFile,linea))
        {
            for(int p = 0; p < linea.length(); p++)
            {
                if(linea[p] == '0')
                {
                    celdas[fila][p].id = 0; //Al agregar el 3 como número a un valor char, lo representa como un espacio vacio
                }else
                {
                    celdas[fila][p].id = linea[p];
                }
            }
            fila++;
        }
    } else
    {
        cout << "Fatal error. Map file could not be load" << endl;
    }

}