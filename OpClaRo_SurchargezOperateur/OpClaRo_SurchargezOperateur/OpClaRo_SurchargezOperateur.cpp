// OpClaRo_SurchargezOperateur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Duree.h"

using namespace std; 

int main()
{
	Duree duree1(2, 11, 30), duree2(2, 12, 29), resultatDuree1et2(0, 0, 0);

	
	if (duree1 == duree2)
	{
		cout << "Les durees sont identiques" << endl;
	}
	else
	{
		cout << "Les durees sont differentes" << endl;
	}

	if (duree1 < duree2)
	{
		cout << "La duree 1 est plus petite que la duree 2" << endl;
	}
	else if (duree1 == duree2)
	{
		cout << "Les durees sont identiques" << endl;
	}
	else
	{
		cout << "La duree 1 est plus grande que la duree 2" << endl;
	}

	if (duree1 > duree2)
	{
		cout << "La duree 1 est plus grande que la duree 2" << endl;
	}
	else if (duree1 == duree2)
	{
		cout << "Les durees sont identiques" << endl;
	}
	else
	{
		cout << "La duree 1 est plus petite que la duree 2" << endl;
	}

	if (duree1 <= duree2)
	{
		cout << "La duree 1 est inferieur ou egal a la duree 2 " << endl;
	}
	else
	{
		cout << "La duree 1 est superieur a la duree 2" << endl;
	}

	if (duree1 >= duree2)
	{
		cout << "La duree 1 est superieur ou egal a la duree 2 " << endl;
	}
	else
	{
		cout << "La duree 1 est inferieur a la duree 2" << endl << endl;
	}
	
	resultatDuree1et2 = duree1 + duree2;
	
	cout << duree1 << " + " << duree2 << " = " << resultatDuree1et2 << endl;

	return 0;
}
