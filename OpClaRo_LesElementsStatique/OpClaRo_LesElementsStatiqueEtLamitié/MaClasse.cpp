#include "MaClasse.h"
#include<iostream>

using namespace std;

void MaClasse::maMethode()	// Ne pas remettre static dans le .cpp
{
	cout << "HelloWorld !" << endl;
}

Personnage::Personnage()
{
	++compteur; // quand un objet Personnage est créer, + 1 au compteur;
}

int Personnage::nombresInstances()
{
	return compteur;		// Retourne le nombre d'instance	
}

Personnage::~Personnage()
{
	--compteur; // on enleve 1 au compteur quand un objet est supprimé 
}

int Personnage::compteur = 0;