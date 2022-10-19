#include<iostream>
#include "math.h"
#include "math.cpp"
using namespace std;


int main()
{
	int heures, minutes, secondes;
	cout << nombreDeSecondes(1, 10, 25) << endl; // On peut mettre dans les parametres des valeurs par defaut si necessaire
												//  comme les variables sont declare dans le prototype dans le fichier .h
	return 0;


	/*
	int a(2), b(2);
	cout << "Valeur de a : " << a << endl;
	cout << "Valeur de b : " << b << endl;
	b = ajouteDeux(a);
	cout << "Valeur de a : " << a << endl;
	cout << "Valeur de b : " << b << endl;

	return 0;
	*/
}