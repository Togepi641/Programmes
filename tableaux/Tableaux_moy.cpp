#include <iostream>
using namespace std;


void Affiche(float tab; int taille)
{
	for (int n = 0; n < taille; ++n)
	{
		cout << tab[i] << " ";
	}
}
bool Ordre (float val1, float val2)
{
	float val = val1;
	if (val1 > val2)
	{
		val1 = val2;
		val2 = val;

		return true
	}
	else return false
	
}

void Tri(float tableau[], int taille)
{
	bool permute = false;

	do
	{
		permute = false;

		for (int i = 0; i < taille; i++)
		{
			if( Ordre(tableau[i], tableau[i +1])
				permute = true
		}
	}
} while (permute);

int main()
{
	const int taille = 5;
	float tableau[taille] = { 10 , 2 , 5, 4, 1 };

	Affiche(tableau; taille);
	Tri(tableau; taille);
	Affiche(tableau; taille);
	return 0;
}