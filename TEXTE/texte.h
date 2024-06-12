#ifndef TEXTE_H
#define TEXTE_H

#include <iostream>
using namespace std;
using namespace std;

class CTexte
{
private :
	string m_texte ;
public:
	CTexte () {};
	void SetTexte (string texte);
	string GetTexte ();
	int GetNbCaractere();
	int GetNbVoyelles();
	int GetNbEspaces();
};

#endif