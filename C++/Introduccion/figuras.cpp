#include<iostream>

using namespace std;

int main()
{
    float r, area, volumen;
    float pi = 3.1416;

  
    //Obtener radio del Usuario
    cout << "Ingrese el valor del radio para el circulo y la esfera\n";
    cin >> r;
    
    //Calcular area y volumen    
    area = pi*r*r;
    volumen = 4*pi*r*r;
    
    //Desplegar información de cada resultado
    cout <<"El area de un circulo con radio "<< r <<" es: " << area <<"\n";
    cout <<"El volumen de una esfera con radio "<< r <<" es: " << volumen <<"\n";
}
