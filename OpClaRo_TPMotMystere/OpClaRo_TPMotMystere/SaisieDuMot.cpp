#include "PrototypeFonction.h"
#include<iostream>
#include<string>
using namespace std;

string SaisieDuMot(string &MotMystere)
{
	// Acquisition du mot mystere 
	cout << "Joueur 1 saisisez le mot mystere (en minuscule) : ";
	cin >> MotMystere;
	// Convertir la chaine en MAJUSCULES
	for (int i(0); MotMystere[i] != '\0'; i++) // Tant qu'on est pas a la fin de la chaine 
	{
		if (MotMystere[i] >= 'a' && MotMystere[i] <= 'z') // Si la lettre est compris entre a et z
		{
			MotMystere[i] -= 32; // enleve 32 dans le code ASCII pour mettre en MAJUSCULE
		}
	}
	cout << "Voici le Mot Mystere : " << MotMystere << endl << endl;

	return MotMystere;
	
}

