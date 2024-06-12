#include "texte.h"
#include <string>

void CTexte::SetTexte(string texte)
{
	m_texte= texte;
}

string CTexte::GetTexte ()
{
	return m_texte;
}

int CTexte::GetNbCaractere()
{
	return m_texte.length();
}

/*
int CTexte::GetNbVoyelles()
{
	int nv=0;
	for (int i = 0; m_texte[i] != '\0')
	{
		if(((m_texte[i]=='a') || (m_texte[i]=='e') || (m_texte[i]=='i') || (m_texte[i]=='o') || (m_texte[i]=='u') || (m_texte[i]=='y'))  ||  ((m_texte[i]=='A') || (m_texte[i]=='E') || (m_texte[i]=='I') || (m_texte[i]=='O') || (m_texte[i]=='U') || (m_texte[i]=='Y')))
		{
			nv++;
		}
	}
	return nv;
}*/