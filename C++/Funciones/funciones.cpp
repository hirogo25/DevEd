#include <iostream>

using namespace std;

void printCuteMessage()
{
    cout << "¡Eres increaible!" << endl;
}

bool isPlayerDead(int hp)
{
    if(hp <= 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int totalLife = 3;

    cout << isPlayerDead(totalLife) << endl;

    if(isPlayerDead(totalLife))
    {
        cout << "Game over" << endl;
    }
    else{
        cout << "El jugador aun esta vivo" << endl; 
    }
    //printCuteMessage();

    return 0;
}