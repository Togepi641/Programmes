#include <iostream>
#include <string>
using namespace std;
int main()
{
  string prenom;
  string adresse;
  int num_rue;
  int age;
  string nom;
  
  cout << " quel est ton prenom ? ";
  getline(cin, prenom);
//  cin.ignore() ;
  cout << "age " ;
  cin >> age;
  if (age >=18)
  {
      
      cout << " majeur " << endl ;
  }
  else
  {
      
      cout << " mineur " << endl ;
  }  
  cout << " ton adresse complete ? " ;
  cin.ignore() ;
  getline(cin, adresse);
  cout << " ton nom ? ";
  cin.ignore() ;
  getline(cin, nom);
  cout << "num de rue ?";
  cin >> num_rue ;
  cout << " tu t appelles " << nom  << " " << prenom << " vous avez " << age <<" ans et tu habites au " << num_rue << " " << adresse << endl ; 
  return 0;
}
  
  
