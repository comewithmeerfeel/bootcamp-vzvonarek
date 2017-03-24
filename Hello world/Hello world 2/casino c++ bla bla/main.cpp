#include <iostream>

using namespace std;

int main()
{
    int uplata, stanje, chip, razlika, ulog;

    cout << "Unesite sredstva za igru " << endl;
    cin >> stanje;



    cout << "Unesite iznos koji zelite koristiti za igru " << endl;
    cin >> ulog;

    stanje = stanje - ulog;
    chip = ulog/5;
    razlika = ulog%5;
    stanje = stanje + razlika;
    cout <<"Na raspolaganju Vam je " << chip << " chipova " << endl;
    cout <<"Stanje Vaseg racuna je: " << endl;
    cout << stanje;





    return stanje;
}
