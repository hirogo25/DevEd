#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
    x = 3;
    y = 3;
}

void Player::callInput()
{   
    char userInput = ' ';
    cin >> userInput;

    lastX = x;
    lastY = y;
    switch(userInput)
    {
        case 'w':
            y -= 1;
            break;
        case 's':
            y += 1;
            break;
        case 'd':
            x += 1;
            break;
        case 'a':
            x -= 1;
            break;
    }
}

void Player::currentPos()
{
     cout << "Las coordenadas son X: " << x << " Y: " << y << "\n" << endl;
}

void Player::resetToSafePosition()
{
    y = lastY;
    x = lastY;
}