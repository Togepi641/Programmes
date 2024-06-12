#include <iostream> //inclure les bibliothèque
using namespace std;

void AligneCars(int nb_cars, char car) // déclaration de la fontion
{
	for (int i = 1; i <= nb_cars; i++) // boucle qui compte le nb de caractère
	{
		cout << car; // afficher le caractère
	}
}

void FabLigne(int nb_espaces, char car, int nb_cars) // déclaration d'une	utre fonction
{
	AligneCars(nb_espaces, ' '); // appeler la fonction précédente pour poser du vide
	AligneCars(nb_cars, car); // appeler encore une fois la fonction pour les caractère
	cout << endl;
}

int GetNbEspaces(int nb_cars, int position) // déclaration d'une autre fonction
{
	return position-nb_cars/2; // positionner les caractère
}

void EmpileLignes(int nb_cars, int position, char car, int nb_lignes) // déclaration d'une	utre fonction
{
	int espaces = GetNbEspaces(nb_cars, position); // déclaration d'une variable local
	for (int j = 0; j < nb_lignes; j++) // boucle qui compte le nb de lignes
	{
		FabLigne(espaces, car, nb_cars); // appeler la fonction en question
	}
}

void EmpileLignes( int position, char car, int nb_lignes) // déclaration d'une	utre fonction
{
	int espaces; // variable local
	for (int i = 0; i <= nb_lignes; i++) // boucle qui compte le nb de lignes
	{
		espaces = GetNbEspaces(i, position); // affectation de la variable dans l'ittération
		FabLigne(espaces, car, i); // appeler la fonction en question 
	}
}

int main()
{
	AligneCars(5, '*');
	cout << endl;
	FabLigne(3, '*', 5);
	cout << GetNbEspaces(20, 15) << endl;  // test des fonctions crée précédement
	EmpileLignes(32, 'I', 40);
	EmpileLignes(30, 32, 'H', 40);
	EmpileLignes(32, 'I', 40);
}