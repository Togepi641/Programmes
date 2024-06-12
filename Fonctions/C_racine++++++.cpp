#include <iostream>
#include <math.h>
using namespace std;


double Getvalabs(double y)
{
    return (y < 0 ? -y : y);
}

double GetPuissance(double x, int e)
{
    double result(1) ;
    for (int i=0; i < e; i++)
    {
        result = x * result;
    }
    return result;
}

double Getracine(double x)
{
    double r(0);
    double pr = 0.00001;
    double b0 = 0;
    double b1 = x;
    r = (b0 + b1) / 2;
    
    while (Getvalabs(r*r - x) > pr)
    {
        if (r*r > x) b1 = r;
        else           b0 = r;
        r = (b0 + b1) / 2;
 //       cout << r << endl;
    }
    return r;
}

double Getracine(double x, int e)
{
    
    double r(0);
    double pr = 0.00001;
    double b0 = 0;
    double b1 = x;
    double test = 0 ;
    r = (b0 + b1) / 2;
    while (Getvalabs(test - x) > pr)
    {
        test = GetPuissance(r, e);
        cout << "test :" << test << endl;
        if (test > x) b1 = r;
        else           b0 = r;
        r = (b0 + b1) / 2;
        cout <<" r  "<< r << endl;
    }
    return r;
}




int main()
{
    cout << " test racine" << endl;
    cout << Getracine(10) << endl;
    cout << "GetPuissance(10, 2) " << GetPuissance(10, 2) << endl;
    cout << "GetPuissance(3, 3) " << GetPuissance(3, 3) << endl;
    cout << "Getracine(25, 3) " << Getracine(25, 3) << endl;
}
