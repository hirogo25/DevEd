#include <iostream>

using namespace std;

class Mago
{
private:

public:
    int mana, hp, power;

    Mago(int iMana, int iHP, int iPower)
    {
        mana = iMana;
        hp = iHP;
        power = iPower;
    }

    void spell()
    {
        cout << "Magia" << power << endl;
    }

};

class MagoHielo : public Mago //Esto significa que va a heredar las propiedades publicas de la Clase Padre
                            //Las Clases no heredan los miembros y valores privados
{
public:
    MagoHielo(int iMana, int iHP, int iPower):Mago(iMana, iHP, iPower)
    {
        mana = iMana;
        hp = iHP;
        power = iPower + 10;
    }
};



int main()
{
    Mago Gandalf(100, 10, 20);
    MagoHielo Saruman(100, 10, 20);
    Gandalf.spell();
    Saruman.spell();

    return 0;
}