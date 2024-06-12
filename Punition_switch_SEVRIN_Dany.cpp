#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a  (1) ;
    string punition ;    // déclaration des variables
    int matiere  ;
    
    cout << "Saisissez le nombre de ligne" << endl ; // demander le nombre de lignes
    cin>> a ;  // stock la saisie
    
    cout << "Saisissez la punition" << endl ;  // demander la punitions
    cin.ignore() ;
    getline(cin, punition);   // stock la phrase
    
    cout << "Saisissez la matiere concerne : 1 pour Math, 2 pour Francais, 3 pour informatique et un autre chiffre ou lettre pour une autre matiere" << endl  ; // demander la matière concernée
    cin >> matiere ; // stock la saisie
    cin.ignore() ;
    
    switch (matiere) // étudier des cas différent
    {
        
    
        case 1: // premier cas
           
                cout << "Pour le professeur de Mathematique" << endl ; // afficher la matiere concernée 
                break;
    
        case 2 : // deuxième cas
                cout << "Pour le professeur de Francais" << endl ; // afficher la matiere concernée
                break;
    
        case 3 : // troisième cas
                cout << "Pour le professeur de d'informatique" << endl ; // afficher la matiere concernée
                break;
     
        default: // si cas 1, 2 ou 3 pas réaliser 
                cout << " Pour un professeur d'une autre matiere" << endl ;
    }
    
    for ( int n ( 1 ) ; n <= a ; n++ )  // le nombre de ligne nécéssaires
            {
            
                cout << punition << endl ; // affiche la punition 
    
            }
}