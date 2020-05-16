#include <iostream>

using namespace std;

int main()
{
    int Math = 0;
    int Biology = 0;

    cout << "Introduce tu calificacion en matematicas" << endl;
    cin >> Math;
    cout << "Introduce tu calificacion en bilogia" << endl;
    cin >> Biology;

    if (Math > 6)
    {
        cout << "El alumno aprobo en Matematicas" << endl;

    }
    else
    {
        cout << "El alumno reprobo Matematicas" << endl;
    }

    switch(Biology)
    {
        case 10:
            cout << "El alumno es un genio" << endl;
            break;
        case 8:
            cout << "El alumno aprobo" << endl;
            break;
        case 5:
            cout << "El alumno reprobo" << endl;
            break;
        default:
            cout << "Valor invalido" << endl;
            break; 
    }

    


}