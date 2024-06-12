#include <iostream>
using namespace std;

template < class Y >
void GetAffiche(Y tab[], int taille)
{
	for (int n = 0; n < taille; ++n)
	{
		cout << tab[n] << " ";
	}
	cout << endl;
}


template < class B >
B Ordre(B& val1, B& val2)
{
	float val = val1;
	if (val1 > val2)
	{
		val1 = val2;
		val2 = val;

		return true;
	}
	else return false;

}

template < class R >
void Tri( R tableau[], int taille)
{
	bool permute = false;

	do
	{
		permute = false;

		for (int i = 0; i < taille-1; i++)
		{
			if (Ordre(tableau[i], tableau[i + 1]))
				permute = true;
		}
	} while (permute == true);
} 

int main()
{
	const int taille = 5;
	int table[taille] = { 10,5,3,20,2 };

	GetAffiche(table, taille);
	Tri(table, taille);
	GetAffiche(table, taille);
	return 0;
}