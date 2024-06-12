#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a  (1) ;
    string punition ;    // déclaration des variables
    string matiere ("char") ;
    
    cout << "Saisissez le nombre de ligne" << endl ; // demander le nombre de lignes
    cin>> a ;  // stock la saisie
    
    cout << "Saisissez la punition" << endl ;  // demander la punitions
    cin.ignore() ;
    getline(cin, punition);   // stock la phrase
    
    cout << "Saisissez la matiere concerne : M pour Math, F pour Francais, I pour informatique" << endl  ; // demander la matière concernée
    cin >> matiere ; // stock la saisie
    cin.ignore() ;
    
    if ( matiere =="M") // test de matiere contient "M"
    {
        cout << "Pour le professeur de Mathematique" << endl ; // afficher la matiere concernée    
    }
    
    else if ( matiere =="F") // test de matiere contient "F"
    {
        cout << "Pour le professeur de Francais" << endl ; // afficher la matiere concernée
    }
    
   else if ( matiere == "I")  // test de matiere contient "I"
    {
        cout << "Pour le professeur de d'informatique" << endl ; // afficher la matiere concernée  
    } 
    else 
    {
        cout << " Pour un professeur d'une autre matiere" << endl ;
    }
    
    for ( int n ( 1 ) ; n <= a ; n++ )  // le nombre de ligne nécéssaires
            {
            
                cout << punition << endl ; // affiche la punition 
    
            }
}


//Appel bibliothèques et autres déclarations liées aux espaces de noms

//Fonction principale (main)
     //Déclaration, affectation de variables locales
     //entier                 nb_lignes
     //chaine de caractères     texte
     //caractère                matiere

     //Affiche ligne : "Nombre de lignes ?"
     //Récupère la saisie dans nb_lignes
     //Vide la mémoire de "cin"

     //Affiche ligne : "Texte à copier ?"
     //Récupère la saisie dans texte

     //Affiche ligne : "Matière M, F ou I ?"
     //Récupère la saisie dans matière
     //Vide la mémoire de "cin"

     //Contrôle si matière M : Affiche ligne : "En Maths:"
         //Sinon Si matière F : Affiche ligne : "En Français:"
         //Sinon Si matière I : Affiche ligne : "En Informatique:"
         //Sinon : Affiche ligne : "En Informatique:"

     //Boucle comptant les lignes à afficher jusqu'aux nbLignes
         //Affiche ligne texte

//Fin de la fonction principale