#include <iostream>

using namespace std;

class Humano
{
    public:
        int Edad;        
        
        Humano(int parEdad)
        {   
            Edad = parEdad;
        }

        void pensar()
        {
            cout << getThinkMessage() << endl;
        }

    private:
        int NivelSocial;
        int Inteligencia ;
        int Suerte ;
        

        //La funcion es Privada
        //El usuario no tiene acceso a esta funcion, solo el programador
        // Esto sirve para Abstraer: el usuario no necesita saber como se genera la informacion que solicita
        string getThinkMessage() 
        {
            cout << NivelSocial << endl;
            if (NivelSocial + Suerte > 100)
            {
                return "Estoy teniendo pensamientos felices";
            } else if(Suerte > Inteligencia)
                {
                    return "Soy un Suertudo";
                } else if (Edad > 18)
                {
                    return "No soy un bebe";
                } else
                {
                    return "No pienso nada";
                }
        }
};


int main()
{
    Humano Bob(19);
    Bob.pensar();

    return 0;
}