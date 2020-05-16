#include <iostream>

using namespace std;

class Perro
{
    public:
        

        Perro(string Name, string TipoLadrido)
        {
            Nombre = Name;
            Ladrido = TipoLadrido;
        }
        
        string getName()
        {
            return Nombre;
        }  

        void setNombre(string Name)
        {
            Nombre = Name;
        }

        void Ladra() //Si los Atributos son Privados, las funciones para tener acceso a ellos deben de ser Publicas
        {
            cout << Ladrido << endl;
        }
        
    private:
        string Nombre; //Ya no se puede tener acceso a esta variable por medio de Perro.Nombre
        string Ladrido;

};

int main()
{
    Perro perroUno("Yin", "Guau");
    cout << perroUno.getName() << endl;

    return 0;
}
