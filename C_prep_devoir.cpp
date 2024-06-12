#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Declarer les variablesvar1
    // var2 
    // result
    // saisir & stock dans la var1
    // pareil pour var2
    // stocker dans result var1/var2
    // afficher le nb d octet
    // afficher les caractère A ou B ou T 
    // afficher afficher 10 fois "Bien" "Assez bien" ou "Très bien"
    
    int var1 (1);
    int var2 (2);
    float result (1.2); 
    char lettre ( 'A' );
    
    cout << " saississez un premier nb " << endl ;
    cin >> var1 ;
    
    cout << " saississez un deuxieme nb " << endl ;
    cin >> var2 ;
    
    result = (float)var1/(float)var2 ;
    
    cout << " le resultats est de: " << result << endl ;
    
    cout << " il y a " << sizeof( result )  << " d'octets et " << sizeof( result ) * 8 << " bits " << endl ;
    
    
    cout << " Saissisez 'A' ou 'B' ou 'T' " << endl ;
    cin >> lettre ; 
    
    if ( lettre == 'A' )
    { 
        for ( int n ( 1 ) ; n <= 10 ; n++ ) 
        {
            
            cout << "Assez bien" << endl ; 
    
        }
    }
        
        if ( lettre == 'B' )
        {
            
            for ( int t ( 1 ) ; t <= 10 ; t++ ) 
            {
            
                cout << "Bien" << endl ; 
    
            }
        
        }
    
        
        if ( lettre == 'T' )
        { 
        for ( int i ( 1 ) ; i <= 10 ; i++ ) 
            {
            
                cout << "Tres bien" << endl ; 
    
            } 
        }    
    
} 