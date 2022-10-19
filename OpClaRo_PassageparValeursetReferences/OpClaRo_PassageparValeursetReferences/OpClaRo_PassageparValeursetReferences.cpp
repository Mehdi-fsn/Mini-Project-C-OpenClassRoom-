#include<iostream>

using namespace std;


// Test passage par valeur
/*
int ajouteDeux(int a) // Case memoire reservé a "a" avec la valeur de "nombre"
{
	a += 2;
	return a;
}

int main()
{
	int nombre(4), resultat;    // Case mémoire reservé a "nombre" 
	resultat = ajouteDeux(nombre); // "resultat" prend la valeur de "a" + 2

	cout << "Le nombre original vaut : " << nombre << endl;
	cout << "Le resultat vaut : " << resultat << endl;
	return 0;
}*/

// Test passsage par reference 

int ajouteDeux(int& a) // "a" a la meme case mémoire que "nombre"
{
	a += 2;
	return a;
}

int main()
{
	int nombre(4), resultat;

	cout << "La valeur originale est : " << nombre << endl;
	resultat = ajouteDeux(nombre);
	cout << "Le resultat est : " << resultat << endl;
	return 0;
}

