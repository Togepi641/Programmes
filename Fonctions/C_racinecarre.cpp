#include <iostream>
#include <math.h>
using namespace std;


double Getvalabs(double y)
{
    return (y<0 ? -y : y) ;
}


double Getracine(double x)
{
    double r;
    double pr = 0.001;
    double b0 = 0;
    double b1=x;
    r = (b0 + b1) / 2;
    while (Getvalabs(r * r - x) > pr)
    {
        if (r * r > x) b1 = r;
        else           b0 = r;
        r = (b0 + b1) / 2;
        cout << r << endl;
    }
    return r;
}

int main()
{ 
    double x ; 
    cout << " taper la valeur que vous voulez savoir pour la racine" << endl;
    cin >> x;
    cout << "le resultat est " << Getracine(x);
}