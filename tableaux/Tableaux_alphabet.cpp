#include <iostream>
using namespace std;


template < class Y >
void Affiche(Y tab[], int taille)
{
	for (int n = 0; n < taille; ++n)
	{
		cout << tab[n] << " ";
	}
	cout << endl;
}

template < class B > 
void GenererAlphabet(B tab, int taille)
{
	for (int n = 0; n < taille; ++n)
		tab[n] = n+65;
}

void Efface(char tab[], int taille, char car)
{
	for (int n = 0; n < taille; ++n)
	{
		if (car == tab[n])
		{
			tab[n] = '*';
		}
	}

}


int main()
{
	const int taille = 26;
	char car = 'A';
	char table[taille] = { };

	GenererAlphabet(table, taille);
	Affiche(table, taille);

	while (car != 'Z')
	{
		cout << "Quel caractere veux tu effacer ?" << endl;
		cin >> car;
		Efface(table, taille, car);
		Affiche(table, taille);
	}
	return 0;
}