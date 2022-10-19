#include "PrototypeFonction.h"
#include<iostream>
#include<string>
#include<ctime> // Obligatoire
#include<cstdlib> // Obligatoire 
#include<vector>

using namespace std;

string melangeLettres(string motMystere)
{
	string lettresMelange;
	// Générer un nombre aléatoire entre 0 et la position de la derniere lettre du mot
	srand(time(0));

	int tailleMot = motMystere.size();
	for (int i(0); i < tailleMot; i++)
	{ 
		int position;

		position = rand() % (motMystere.size()); // Attribue une chiffre aléatoire entre 0 et (le nombre ce caractere - 1) a position

		lettresMelange += motMystere[position];
		motMystere.erase(position, 1);
	}
	cout << lettresMelange << endl;

	
	// Ecrire le mot mystere en mot avec les meme lettres mélangé
	return lettresMelange;
}
