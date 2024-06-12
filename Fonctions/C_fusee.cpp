#include <iostream>
using namespace std;

void FabBloc(int largeur, char car)
{
	for (int i = 0; i < largeur; i++)
		cout << car;
}

void FabEtage(int largeur, char car)
{
	FabBloc(largeur, car);
	//on passe à la ligne suivante
	cout << endl;
}

void PositionneBloc(int pos)
{
	//On insere un bloc vide
	FabBloc(pos, ' ');
}

void PoseBloc(int largeur, char car, int decal)
{
	//Décalage positif on insere des espaces
	PositionneBloc(decal);
	FabBloc(largeur, car);
}

int GetDecalage(int largeur, int centre)
{
	return  centre - largeur / 2;
}

void PoseBloc(int largeur, int centre, char car)
{
	PoseBloc(largeur, car, GetDecalage(largeur, centre));
}

void FabEtage(int largeur, int centre, char car)
{
	PoseBloc(largeur, centre, car);
	//on passe à la ligne suivante
	cout << endl;
}

void FabBuilding(int largeur, int centre, char car, int nb_etages)
{
	for (int i = 0; i < nb_etages; i++)
		FabEtage(largeur, centre, car);
}

void FabPyramide(int centre, char car, int nb_etages)
{
	for (int i = 1; i <= nb_etages; i++)
	{
		//Pour éviter les legers décalages
		int largeur = i;
		if (largeur % 2 == 0) largeur--;
		FabEtage(largeur, centre, car);
	}
}

int main()
{
	int nb_etages = 30;
	int largeur = 20;
	char car;
	int decalage;
	int centre;

	do
	{
		cout << "largeur : ";
		cin >> largeur;
		cin.ignore();
		cout << "element : ";
		cin >> car;
		cin.ignore();
		cout << "centre : ";
		cin >> centre;
		cin.ignore();
		cout << "nb_etages : ";
		cin >> nb_etages;
		cin.ignore();
		FabBloc(largeur, car);
		cout << endl;
		FabPyramide(centre, car, nb_etages);
		FabBuilding(largeur, centre, car, nb_etages);
		FabPyramide(centre, car, nb_etages);
	} while (largeur);
}