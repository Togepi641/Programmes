#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile;
	myfile.open('exemple.txt');
	myfile << "writting this to";
	myfile.close;
	return 0
}

