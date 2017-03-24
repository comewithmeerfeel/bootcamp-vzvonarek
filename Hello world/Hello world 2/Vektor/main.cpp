#include <fstream>
#include <iostream>
#include <vector>
#include <list>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    vector <string> podaci;

    ifstream input ("ime.txt");

    string line;
    while (input) {
        getline(input, line);
        podaci.push_back(line);
    }

    input.close();

    for (int i=0; i< podaci.size(); i++){
        cout << podaci [i] << endl;
    }

    return 0;
}
