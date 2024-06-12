//Pour la prise en main de la console
#include <windows.h>
//Pour _kbhit() & _getch()
#include "conio.h"
//Pour string & cout
#include <iostream>
using namespace std;
//Positionne l'engin curseur sur la console en x & y
void GotoXY(int colonne, int ligne, HANDLE console, string engin)
{
	//Structure de coordonnées x y pour console
	COORD coord;
	coord.X = colonne;
	coord.Y = ligne;
	//Positionne le curseur sur la console avec la structure COORD
	SetConsoleCursorPosition(console, coord);
	cout << engin;
}
int main(void)
{
	//Variables globales////////////////////////////////////////////////
	//Prise en main de la console par pointeur sur console standard
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	//Variable de visibilité du curseur à faux
	CONSOLE_CURSOR_INFO invisible = { 1, FALSE };
	//Capture clavier
	char mv = 0;
	//Coordonnées de sortie
	const int x_out = 100;
	const int y_out = 25;
	//Coordonnées actuelles
	int x = x_out / 2;
	int y = y_out / 2;
	//Coordonnées anciennes
	int old_x = x;
	int old_y = y;
	//Engin spatial
	string engin = "<|>";
	//Anti-engin spatial
	string anti_engin = " ";
	//////////////////////////////////////////////////////////////////

		//Pré-positionnement
		GotoXY(0, 0, console, "DIRIGEZ VOUS AVEC LES FLECHES VERS OUT");
	GotoXY(x, y, console, engin);
	//Boucle infinie
	while (1)
	{
		//Capture action pression clavier
		if (_kbhit())
		{
			GotoXY(0, 0, console, "DIRIGEZ VOUS AVEC LES FLECHES VERS OUT");
			//Récupération du message clavier
			mv = _getch();
			//Mouvement en relation à la pression sur les flèches clavier
			if (mv == 'M') x++;
			if (mv == 'K') x--;
			if (mv == 'P') y++;
			if (mv == 'H') y--;
			//Contrôle des frontières de l'écran
			if (x < 0) x = x_out;
			if (x > x_out) x = 0;
			if (y < 0) y = y_out;
			if (y > y_out) y = 0;
			//Rend le curseur invisible
			SetConsoleCursorInfo(console, &invisible);
			//Effacement de l'engin à l'ancienne position
			GotoXY(old_x, old_y, console, anti_engin);
			//Mise à jour des anciennes positions
			old_x = x; old_y = y;
			//Positionnement de l'engin à la nouvelle position
			GotoXY(x, y, console, engin);
			//Positionnement de la sortie
			GotoXY(x_out, y_out, console, "OUT");
			//Contrôle de la sortie vers l'hyperespace
			if (x == x_out && y == y_out)
			{
				GotoXY(0, 0, console,
					"GAME OVER ! GAME OVER ! GAME OVER \n");
				return 0;
			}
		}
	}
	return 0;
}