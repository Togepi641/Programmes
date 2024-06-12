#include <iostream>
#include <math.h>
using namespace std;





void SetOrdre(int& a , int& b)
{
    int c=a;
    if (a > b)
    {     
        a = b;
        b = c;   
    }
    
}

int main()
{
    int val1;
    int val2;

    cout << " taper la premiere valeur" << endl;
    cin >> val1;

    cout << "taper une seconde valeur" << endl;
    cin >> val2;

    SetOrdre(val1, val2);
    cout << "l'ordre est: " << val1 << "<" << val2 << endl;
}