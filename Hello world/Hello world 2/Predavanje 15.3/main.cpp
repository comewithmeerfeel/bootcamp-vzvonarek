#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Unesite velicinu polja: ";
    cin >> x;

    int *polje = new int [x];

    for (int i=0; i < x; i++)
    {
    cout << "Polje " << i << ":";
    cin >> polje [i];
    }

    for (int i=0; i < x; i++)
    {
    cout << polje [i] << "\t";
    }

    delete polje;
    polje = nullptr;

    return 0;
}
