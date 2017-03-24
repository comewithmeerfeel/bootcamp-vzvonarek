#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id;
    string ime, prezime, za_spremanje;
    cout << "Unesite id: ";
    cin >> id;
    cin.ignore(); //koristimo jer u streamu treba preskociti n varijablu koja nam nije potrebna

    cout << "Unesite ime: ";
    getline (cin, ime);
    cout << "Unesite prezime: ";
    getline (cin, prezime);

    //priprema za spremanje

    za_spremanje = to_string (id) + " " + ime " "+ prezime + "\n";

    ofstream output;
    output.open ("ime.txt",ios::out|ios::app);
    output.close();

    return 0;
}
