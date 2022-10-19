#include<iostream>
#include<string>
#include"PrototypeFonction.h"
#include"SaisieDuMot.cpp"
#include"MelangeLettres.cpp"
#include"Joueur2ChercheMot.cpp"

using namespace std;

int main()
{
	string motMystere("\0");
	string chercheMot;
	int resultat;
	char rejouer;

	do
	{
		// 1 : Le joueur 1 saisie le mot au clavier
		SaisieDuMot(motMystere);

		do
		{
			// 2 : L'ordinateur mélange les lettres du mot

			cout << "Joueur 2 retrouvez le bon mot : ";
			melangeLettres(motMystere);

			// 3 : Le joueur 2 essaie de deviner le mot d'origine a partir des lettres mélangées 

			resultat = rechercheDuMotMystere(chercheMot, motMystere);

		} while (resultat != 1);

		cout << endl << "Si vous voulez rejouer appuyer sur y sinon n : ";
		cin >> rejouer;
		cout << endl;

	} while (rejouer == 'y');

	return 0;
}