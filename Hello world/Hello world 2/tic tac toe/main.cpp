#include <iostream>
#include <vector>

using namespace std;

int main (){

vector<int> vektor;
int unos=0;
do {
cout << "Unesite element u vektor: ";
cin >> unos;
vektor.push_back (unos);

}
while (unos != 0);

for (int i = 0; i< vektor.size();i++){
cout << "Element vektora na poziciji " << i << "je: " << vektor [i] << endl;
}

cout << endl;

return 0;
}
