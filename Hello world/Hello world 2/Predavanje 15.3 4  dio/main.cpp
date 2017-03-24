
#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	cout << "Unesite velicinu polja: ";
	cin >> x >> y >> z;

	int ***p_p_p_polje = new int**[x];

	for (int i = 0; i < x; i++){

		p_p_p_polje[i] = new int*[y];

		for (int j = 0; j < y; j++)

		p_p_p_polje [i][j]= new int [z];

}



	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)

		{   for (int k = 0; k < z; k++)

               { cout << "Unesite vrijednost polja[" << i << "], [" << j << "], [" << k << "]: ";
                 cin >> p_p_p_polje[i][j][z];
		}
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{ for (int k = 0; k < z; k++)

			cout << p_p_p_polje[i][j][k] << "\t";
		}
	}
}
	for (int i = 0; i < x; i++)
	{
		delete p_p_p_polje[i];{
		for  (int j=0; j < y; j++)
            delete p_p_p_polje [i][j];}
		}
}
	}delete p_p_p_polje;



    return 0;
}

