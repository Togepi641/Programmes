 // Appel bibliothèques et autres déclarations liées aux espaces de noms
#include <iostream>
#include <string>
using namespace std;

//Fonction principale (main)
int main()
{
   //Déclaration, affectation de variables locales
   //Décimales
   float note_saisie = 0 ;
   float somme_note = 0 ;
   //Entiers
   int compte_note = 0 ;
   
   //Boucle commence :
   while( note_saisie > -1)
   {
       cout << " une note ou -1 pour arreter " << endl ; //Affiche ligne : "Saisir note ou sortir avec -1."
       cin >> note_saisie ; // Récupère la saisie dans note_saisie
       cin.ignore() ; //Vide la mémoire de "cin"
     
       
       if ( note_saisie > -1 ) //Contrôle si note_saisie >-1
       {
           somme_note = somme_note + note_saisie ; //somme_note est incrémenté de note_saisie
           compte_note = compte_note + 1 ; //compte_notes est incrémenté de 1
       }
       
       else //sinon
       {  
           cout << " fin de saisie calcul de la moyenne en cours" << endl ;  //Affiche ligne : "Fin de saisie, calcul de la moyenne en cours."
           break ;
       }
      while ( note_saisie <= -1 ) //Boucle tant que saisie > -1
     {
          if (  note_saisie == -1 ) //Contrôle si compte_notes
          {
              cout << " la moyenne est de : " << somme_note/compte_note ; //Affiche ligne : La moyenne est : somme_note / compte_notes
          }
       
          else //Sinon
          {
              cout << " pas de note saisie" ; //Affiche ligne : Pas de note, pas de moyenne.
          }
     }
   }
    cout << "la moy est de :" << somme_note/compte_note ;
    //Retour ou fin de la fonction main
}
           