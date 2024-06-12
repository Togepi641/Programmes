#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void SetOrdre(int& a, int& b)
{
    int c = a;
    if (a > b)
    {
       a = b;
       b = c;
    }
}
void SetOrdre(int& a, int& b, int& c)
{
    SetOrdre(a,b);
    SetOrdre(a,c);
    SetOrdre(b,c);
}
int main()
{
    int val1, val2, val3;

    cout << "taper une valeur" << endl;
    cin >> val1;

    cout << "taper une seconde valeur" << endl;
    cin >> val2;

    cout << "taper une troisième valeur" << endl;
    cin >> val3;

    SetOrdre(val1, val2, val3);

    cout << val1 << "<" << val2 << "<" << val3;
}
