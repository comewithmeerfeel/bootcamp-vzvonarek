#include <iostream>
#include <vector>
#include <list>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand (time(NULL));

char unos = 'x';
cout << "Unesite x za bacanje novcica ili drugi znak za izlaz " << endl;
cin >> unos;

while (unos =='x')
    {
        if (rand()%2 == 0)
            cout << "Pismo " << endl;
        else
            cout << "Glava " << endl;

        cout << "Unesite x za bacanje novcica ili drugi znak za izlaz " << endl;
        cin >> unos;
    }


    return 0;
}
