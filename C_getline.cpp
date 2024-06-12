#include <iostream>
#include <string>
using namespace std;
int main()
{
  string prenom{ "Dany" };
  int age (18);
  double moy (10.65);
  string nom ( "Sevrin" );
  
  cout << " quel est ton prenom ? ";
  getline(cin, prenom);
  cout << "age " ;
  cin >> age;
  cout << " moyenne bac ? ";
  cin >> moy;
  cout << "nom";
  getline(cin, nom);
  cout << " bravo " << nom  << " " << prenom << " vous avez " << age << " ans, vous avez eu le bac avec une moyenne de " << moy << " ." << endl;
  return 0;
  }