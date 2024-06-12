#include <iostream>
#include <string>
using namespace std;
int main()
{
    for ( int n = 0; n<1000; n++) { // boucle de 0 a 99
       
        if ( n % 10 == 0 ) // teste si n par 10 = 0
        {
            cout << "" << endl ; // passer à la ligne
        }
        cout << n << ", " ; // afficher n
        } 
    
    cout << " liftoff!\n" ;
}