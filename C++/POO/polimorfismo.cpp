#include <iostream>

using namespace std;


class Mago
{
public:

    Mago(int BaseDamage, int BaseHP)
    {
        Power = BaseDamage;
        hp = BaseHP;
    }
    int Poder;

    float damage()
    {
        return Power;
    }

    void getDamage(int Valor)
    {
        hp = hp - Valor;
        cout << "Al mago le quedan "  << hp << " de vida"; 
    }

    void getHP()
    {
        cout << "Mago tiene " << hp << " de vida" << endl;
    }

    
protected:
    int Power, hp;
};

class MagoHielo : public Mago
{
public:
    MagoHielo(int BasePower, int BaseHP) : Mago(BasePower, BaseHP)
    {
        Power = BasePower + 10; 
        hp = BaseHP;
    }

};


class MagoFuego : public Mago
{
public:   //Si no indicamos que es publico, por defecto se queda como privado
    MagoFuego(int BasePower, int BaseHP) : Mago(BasePower, BaseHP)
    {
        Power = BasePower;
        hp = BaseHP + 20;
    }

};

int main()
{
    Mago* magoActual; //

    Mago Harry(1, 20);
    MagoHielo ZubSero(1,20);
    MagoFuego Azula(1,20);

    magoActual = &Azula;
    magoActual->getHP();
    magoActual->getDamage(3);

    return 0;
}