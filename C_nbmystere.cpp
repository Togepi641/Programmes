#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <clocale>


int main()
{
    setlocale(LC_CTYPE, " fra");
    
    const int max (100);
    const int min ( 0) ;
    std::srand(std::time(0));
    
    int mystere = std::rand() % max + min ;
    int saisie (1) ;
    std::cout << mystere ;
    for( int n = 0; n<= 10; n++ ) { // nb d essaie pour le joueur
        std::cout << " devinez le nb mystere entre 0 et 100" << std::endl ; // début du jeu 
        std::cin >> saisie ; // saisie du nb
        if ( saisie > mystere ) // teste pour le nb 
        {
            std::cout << "trop haut" << std::endl ;
        }
        else
        {
            std::cout << " trop bas"<< std::endl ;
        }
        
        if (saisie == mystere)  // test si nb trouver
        {
            std::cout << " bravo tu as trouve le nb mytere: " << mystere << "." ;
            break ;
        }
    if ( n == 10 ) // teste si nb essaie dépasser
    {            
        std::cout << " perdu et le nb mystere est de: " << mystere << "."  ;
    }
         
                                   }
}