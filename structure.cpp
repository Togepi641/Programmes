#include <iostream> 
#include <string>
using namespace std;

struct movies_t
{
	string title;
	int year;
};


void printmovie(movies_t movie);

int main()
{
	string mystr;
	movies_t mine, yours;

	mine.title = " 2001 A space odyssey";
	mine.year = 1968;

	cout << " ton film favoris: " << endl;
	getline(cin, yours.title);

	cout << " année ?";
	cin >> yours.year; cin.ignore();

	cout << "mon film prefere est : "<< endl;
	printmovie(mine);

	cout << "et le tiens est :" << endl;
	printmovie(yours);
	cin.ignore();
	return 0;
}

void printmovie(movies_t movie)
{
	cout << movie.title;
	cout << "(" << movie.year << ")" << endl;
}