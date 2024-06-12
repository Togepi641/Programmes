#include <iostream>
#include <math.h>
using namespace std;

void Affichetableau(int tab[], int taille)
{
	for (int n = 0; n < taille; n++)
	{
		cout << tab[n] << "\t";
	}
	cout << endl;
}

int GetAddition(int tab[], int taille)
{
	int result = 0;
	for (int n = 0; n < taille; ++n)
	{
		result += tab[n];
	}
	return result;
}

long GetProduit(int tab[], int taille)
{
	int result = 1 ;
	for (int n = 0; n < taille; ++n)
	{
		result *= tab[n];
	}
	return result;
}

void GetAdditionTab(int tab1[], int tab2[], int taille)
{
	for (int n = 0; n < taille; ++n)
	{
		tab2[n] = tab1[n] + tab2[n];	
	}
}

int main()
{
	int foo1[] = { 16, 2, 77, 40, 120 };
	int foo2[] = { 1, 1, 1, 1, 1 };
	cout << "GetAddition(foo1, 5) : " << GetAddition(foo1, 5) << endl;
	cout << "GetProduit(foo1, 5) : " << GetProduit(foo1, 5) << endl;

	cout << "Affichetableau(foo1, 5) : " << endl;
	Affichetableau(foo1, 5);
	cout << "Affichetableau(foo2, 5) : " << endl;
	Affichetableau(foo2, 5);
	GetAdditionTab(foo1, foo2, 5);
	cout << "Affichetableau(foo2, 5) : " << endl;
	Affichetableau(foo2, 5);

	cin.ignore();
	return 0;
}