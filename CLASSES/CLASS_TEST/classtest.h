#ifndef CLASSETEST_H
#define CLASSETEST_H

// Déclaration de la classe
class ClasseTest
{
private:
	double m_valeur = 0.0; // Attribut pour stocker la valeur de la classe
	int m_nb_modifs = 0; // Attribut pour compter le nombre de modifications de la valeur
public:
	// Constructeur par défaut
	ClasseTest() {};
	// Fonction pour définir la valeur de m_valeur
	void SetValeur();
	// Fonction pour obtenir la valeur de m_valeur
	int GetVal
		// Fonction pour obtenir le nombre de modifications de m_valeur
		...
		// Fonction pour obtenir le carré de la valeur de m_valeur
		...
		// Fonction pour mettre la valeur de m_valeur au carré
		...
		// Fonction pour obtenir l'inverse de la valeur de m_valeur, ne fait rien si c'est impossible
		...
};
#endif