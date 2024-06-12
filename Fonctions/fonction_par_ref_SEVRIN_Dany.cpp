
#include <iostream>
#include <math.h>
using namespace std;



void M2inch(double& ref_val)
{
    ref_val = ref_val * 100 / 2.54;
}

int main()
{
    double val = 2;
    cout << "taper la valeur " << endl;
    cin >> val;
    M2inch(val);
    cout << val;
}