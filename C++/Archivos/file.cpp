#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*ofstream miArchivo("gamedata.txt");
    string playerName = "";
    if(miArchivo.is_open()) //Verifica si el archivo no esta siendo bloqueado por el Sistema Operativo 
    {
        miArchivo << "Hola Mundo" << endl;
        miArchivo << "Mi nombre es:" << endl;
        cout << "Introduce el nombre de tu heroe" << endl;
        cin >> playerName;
        miArchivo << playerName;
    }
    for(int i = 0; i < 10; i++)
    {
        miArchivo << i << endl;
    }
    miArchivo.close();*/

    ifstream miArchivoRead("gamedata.txt");
    string line;
    string nombreHeroe = "";
    int renglon = 0;

    if(miArchivoRead.is_open())
    {
        while( getline(miArchivoRead, line))
        {
            cout<< line << endl;
            renglon++;
            if(renglon == 3)
            {
                nombreHeroe = line;
            }
        }

    } else
    {
        cout << "El archivo no pudo ser abierto. Revise antivirus" << endl;
    }
    cout <<"Bienvenido a la aventura " << nombreHeroe;

    return 0;
}