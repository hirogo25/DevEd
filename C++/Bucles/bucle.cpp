#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    bool isHappy = true;
    char input = ' ';

    while(counter < 100) 
    {
        cout << counter++ << endl;
    }

    do
    {
        cout << ":)" << endl;
        cout << "Sigues feliz?" << endl;
        cin >> input;
        if (input == 'F')
        {
            isHappy = false;
            cout << ":(" << endl;
        }

    } while(isHappy == true );


    for(int i = 0; i<100; i++)
    {
        cout << i << endl;
    }

}