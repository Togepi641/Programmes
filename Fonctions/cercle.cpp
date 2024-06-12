#include <iostream> //inclure les bibliothèque
using namespace std;

void CalculPeriSurface(float diametre, float& surface, float& peri)
{
	peri = 3.14 * diametre;
	surface = diametre / 2 * diametre / 2 * 3.14;	
}

int main()
{
	float diametre;
	float peri;
	float surface;

	cout << "diametre" << endl;
	cin >> diametre;

	CalculPeriSurface(diametre,surface,peri);
	cout << "le perimetre est de : " << peri << endl;
	cout << "la surface est de : " << surface << endl;
}