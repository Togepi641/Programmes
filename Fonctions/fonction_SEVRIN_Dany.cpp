
#include <iostream>
#include <math.h>
using namespace std;



double GetDiagonale(double coteA , double coteB )
{
    double a;
    a = coteA * coteA + coteB * coteB; 
    a = sqrt(a);
    return a;
}

double Getsurface(double coteA, double coteB)
{
    double a;
    a = coteA * coteB;
    a = a/2 ;
    return a;
}

int main()
{
    double u, v,  w , y;
    cout << "taper la valeur du premier coter " << endl;
    cin >> u;
    cout << "taper la valeur du deuxieme coter " << endl;
    cin >> v;
    w=  GetDiagonale(u,v);
    y = Getsurface(u,v);
    cout << "l'hypothenuse vaut " << w << endl ;
    cout << "l' aire de ce triangle vaut " << y;
           return 0;
}