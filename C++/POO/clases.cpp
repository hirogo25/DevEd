#include <iostream>

using namespace std;

class Gato
{
    public: //Esto define que los Atributos puedan ser vistos y modificados por cualquier persona
        string Name;

    Gato () //Funcion Constructor
    {
        Name = "Guapo";
    }

    Gato (string Nombre) //Puede tener diferentes constructores con diferentes parametros
    {
        Name = Nombre;
    }

    void Miau()
    {
        cout << Name << " dice miau" << endl;
    }

};

int main()
{
    Gato gatito;
    Gato gatin("Gimli");
    cout << gatito.Name << endl;
    cout << gatin.Name << endl; 
    gatin.Miau();
    for(int i = 0; i < 3; i++)
    {
        gatito.Miau();
    }
    return 0;
}