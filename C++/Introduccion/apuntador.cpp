#include <iostream>

using namespace std;

int main()
{
    int Direccion = 3509;
    int * apuntadorDir; //Con *sse define que la variable es tipo apuntador
    apuntadorDir = &Direccion; //& permite obtener la direccion de memoria donde está alojada la variable
    *apuntadorDir = 3;  //Al realizar el cambio a la variable con * previo, la asignación afecta a la variable en la dirección de memoria, no a la variable apuntadorDir
    cout << Direccion << endl;
    cout << apuntadorDir << endl;

}
