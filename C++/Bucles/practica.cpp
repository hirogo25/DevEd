#include <iostream>

using namespace std;

int main()
{   /*Arreglo bidimensional
    Multiples arreglos de 1 dimension
    en este caso, 5 arreglos de 3 posiciones*/
    int ids[5][3] = {
        {0,3,5},
        {5,7,6},
        {8,1,3},
        {4,1,9},
        {7,3,5}
    };



    cout << ids[1][2];
   /* for(int i = 0; i < 5; i++)
    {   
        cout << "\n";
        for(int j = 0; j < 3; j++)
        {
            cout << ids[i][j] << " ";
        }
    }*/
}