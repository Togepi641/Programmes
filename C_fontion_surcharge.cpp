#include <iostream>
#include <math.h>
#include <string>
using namespace std;


void Bonjour()
{
    cout << " bonjour "  ;
}

void Bonjour(string prenom)
{
    Bonjour();
    cout << prenom << endl;
}


void repete(int i)
{
    for (int j = 0; j < i; j++)
        Bonjour();
}
int main()
{
    int x;
    string b;

    cout << " taper une valeur"<< endl;
    cin >> x;
    cout << "donne ton prenom"<< endl;
    cin >> b;
    Bonjour(b);

    repete(x);
    
    return 0;
}
