#include <iostream>
#include "STANJE_H"

using namespace std;

int main()
{
    int stanje, chip, isplata;

    stanje= stanje+(chip*5);

    cout << "Stanje Vaseg racuna je: " << endl;
    cout << stanje;

    cout << "Odaberite sredstva za isplatu: " << endl;
    cin >> isplata;

    if (isplata > stanje){
    cout << "Nedopustena akcija, molim pokusajte ponovno " << endl;

    }


    return 0;
}
