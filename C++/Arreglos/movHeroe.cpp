#include <iostream>
#include <fstream>
#include <sstream>

using namespace std; //Esto evita tener que usar std::cout

void mapDraw(int heroPosX, int heroPosY, char map[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int p = 0; p < 5; p++)
        {
            if(i == heroPosY && p == heroPosX)
            {
                cout << 'H';
                
            }else
            {
                cout << map[p][i];
            } 
        }
        cout << "" << endl;
    }
}

int main()
{
    int heroPosX = 0;
    int heroPosY = 0;
    string sPosX = "";
    string sPosY = "";
    char input = ' ';
    char gameMap[5][5] = 
    {
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };

    //Informacion Archivo
    ifstream archivoRead("gamedata.txt");
    if(archivoRead.is_open())
    {
        getline(archivoRead, sPosX) ;
        getline(archivoRead, sPosY);
        archivoRead.close();

        stringstream x(sPosX);
        stringstream y(sPosY);

        x >> heroPosX;
        y >> heroPosY;
        
    }
    


    mapDraw(heroPosX, heroPosY, gameMap);

    bool isGameOver = false;
    
   while(isGameOver == false)
   {

        cin >> input;
        switch(input)
        {
            case 'd':
                heroPosX++;
                break;
            case 'a':
                heroPosX--;
                break;
            case 'w':
                heroPosY--;
                break;
            case 's':
                heroPosY++;
                break;
            case 'p':
                isGameOver = true;
                break;
        }
        mapDraw(heroPosX, heroPosY, gameMap);
   }
    ofstream archivo("gamedata.txt");
    if(archivo.is_open())
    {
        archivo << heroPosX << endl;
        archivo << heroPosY << endl;
        archivo.close();
    }
    return 0;
}