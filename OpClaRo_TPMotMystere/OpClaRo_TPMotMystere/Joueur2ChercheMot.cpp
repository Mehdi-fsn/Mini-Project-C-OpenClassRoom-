#include "PrototypeFonction.h"
#include<iostream>
#include<string>

using namespace std;

int rechercheDuMotMystere(string chercheMot, string motMystere)
{
	cin >> chercheMot;

	for (int i(0); chercheMot[i] != '\0'; i++) // Tant qu'on est pas a la fin de la chaine 
	{
		if (chercheMot[i] >= 'a' && chercheMot[i] <= 'z') // Si la lettre est compris entre a et z
		{
			chercheMot[i] -= 32; // enleve 32 dans le code ASCII pour mettre en MAJUSCULE
		}
	}

	int resultat(0);
	if (chercheMot == motMystere)
	{
		cout << "Bravo vous avez trouvez le mot mystere !" << endl;
		resultat = 1; 
	}
	else
	{
		cout << "Et non sale noob retente ta chance ;)" << endl << endl;
	}
	return resultat;
}
