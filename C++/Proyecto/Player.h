#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
    //virtual ~Player(); //~ Destructor, se llama cuando el objeto se destruye
    int x, y;
    int lastX, lastY;

    void callInput();
    void currentPos();
    void resetToSafePosition();

protected:

private:

};
#endif //PLAYER_H