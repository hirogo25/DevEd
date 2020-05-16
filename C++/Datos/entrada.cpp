#include <iostream>

using namespace std;

int main()
{
    int Edad = 0;
    int base = 0;
    int altura = 0;

    cout << "Ingresa tu edad: " << endl;

    cin >> Edad; //cin comando de libreria iostream para ingreso de datos hacia una variable

    cout << "Qué joven! Apenas tienes " << Edad << endl;

    cout << "Introduce la base de un rectangulo" << endl;
    cin >> base;
    cout << "Introduce la altura de un rectangulo" << endl;
    cin >> altura;

    cout << "El area del rectangulo es: " << base * altura; //Se pueden imprimir los resultados de operaciones aritmeticas
    




    return 0;
}