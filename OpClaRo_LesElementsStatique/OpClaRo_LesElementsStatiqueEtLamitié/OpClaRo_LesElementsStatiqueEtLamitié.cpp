// OpClaRo_LesElementsStatiqueEtLamitié.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"MaClasse.h"

using namespace std;

int main()
{
	MaClasse::maMethode();
	
	Personnage a;
	Personnage b;

	cout << "On a creer " << Personnage::nombresInstances() << " d'instances de Personnage" << endl;
	
	return 0;
}

