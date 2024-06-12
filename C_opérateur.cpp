#include <iostream>
#include <string>
using namespace std;
int main()
{
int nb_article(1);
int nb_emballages(1);
int nb_reste(1);
int nb_paremb(1);

cout << "Combien voulez vous d articles " << endl ; 
cin >> nb_article ;
cout << "Combien voulez vous d ' ariticle par emballage" << endl ;
cin >> nb_paremb ;
nb_emballages = nb_article/nb_paremb ;
nb_reste = nb_article % nb_paremb ;
cout << " Il vous faudra " << nb_emballages << " emballages et il vous restera " << nb_reste << " articles" ;

}
