#include "texte.h"

int main ()
{
	cout << "bonjour\n";
	CTexte texte;
	texte.SetTexte("Bon appetit");
	cout << texte.GetTexte() << endl;
	cout << "nombre de car : " << texte.GetNbCaractere();
}