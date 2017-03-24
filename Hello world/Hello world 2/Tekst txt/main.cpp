
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib> // za srand
#include <ctime> // za time
#include <string>
#include <fstream>

using namespace std;

void vektorfn();

int main()
{
	//vector <vector <int>> vektor;


	// ispis podataka iz datoteke
	vector <string> podaci;

	ifstream input("primjer.txt");  //deklariranje ifstream
									// objekta input
	string line;
	while (input) // dok ima inputa
	{
		getline(input, line); // input se sprema u line
		podaci.push_back(line); // line se sprema u vektor
	}

	input.close(); // zatvaranje streama

	for (int i = 0; i < podaci.size(); i++)
	{
		cout << podaci[i] << endl;
	}



	// unos podataka u datoteku
	int id;
	string ime, prezime, za_spremanje;
	cout << "unesi ID: ";
	cin >> id;
	cin.ignore();	//koristimo jer u streamu situacije izgled aovako 123\n -> 123 se ucita u int,  a \n se ucita u string pa nam getline
					// preskoci jedan input, s ignore() kako bi preskocili \n a ne da ga ucita u varijablu

	cout << "unesi ime: ";
	getline(cin, ime);
	cout << "unesi prezime: ";
	getline(cin, prezime);

	//priprema za spremanje
		za_spremanje = to_string(id) + " " + ime + " " + prezime + "\n";

	ofstream output;	//stvaranje ofstream objekta ouput
	output.open("primjer.txt", ios::out | ios::app);	// ios:: - flagovi
	output << za_spremanje;
	output.close();		 //zatvaranje outputa

	system("pause");
    return 0;
}
