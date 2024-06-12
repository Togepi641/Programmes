#include <iostream>
using namespace std;
//Déclaration de classe
class CRectangle
{
private:
	//ATTRIBUTS OU DONNÉES MEMBRES
	string m_designation;
	float m_x_a;
	float m_y_a;
	float m_x_b;
	float m_y_b;

public:
	//FONCTION MEMBRES OU MÉTHODES
	//Constructeur par défaut 
	CRectangle();
	//Constructeur d'affectation
	CRectangle(string designation, float x_a, float x_b, float y_a, float y_b);
	//Fonction membre publique dite 'Seteur'
	void SetPos(float x_a, float x_b, float y_a, float y_b);
	//Fonctions membres publiques 'Geteur'
	//Autre fonction membre
	void Affiche();
};

//Constructeur par défaut 
CRectangle::CRectangle() {};
//Constructeur d'affectation
CRectangle::CRectangle(string designation, float x_a,float x_b, float y_a, float y_b)
{
	m_designation = designation;
	m_x_a = x_a;
	m_y_a = y_a;
	m_x_b = x_b;
	m_y_b = y_b;
}
//Fonction membre publique dite 'Seteur'
void CRectangle::SetPos(float x_a, float x_b, float y_a, float y_b)
{
	m_x_a = x_a;
	m_y_a = y_a;
	m_x_b = x_b;
	m_y_b = y_b;
}

//Fonction membre publique 
void CRectangle::Affiche()
{
	cout << "DESIGNATION : " << m_designation << endl;
	cout << "X_A : " << m_x_a << endl;
	cout << "Y_A : " << m_y_a << endl;

	cout << "X_B : " << m_x_b << endl;
	cout << "Y_B : " << m_y_b << endl;
	cout << endl;
}


int main()
{
	CRectangle rectangle1;
	CRectangle rectangle2("rectangle 2", 4.0, 5.0, 6.0, 7.0);

	rectangle2.Affiche();

	rectangle1.SetPos(3.0, 6.0, 4.0, 7.0);
	rectangle1.Affiche();

	rectangle2.SetPos(8.0, 9.0, 16.0, 18.0);
	rectangle2.Affiche();
	//	cout << "Voir donnee membre m_x : " << point2.m_x;
	return 0;
}