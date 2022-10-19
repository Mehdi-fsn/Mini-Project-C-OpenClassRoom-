#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string const nomFichier("C:/Users/Mehdi/Documents/Programmation/C++/Test.txt");
	// Déclare une chaine de caractere qui contient l'emplacement du fichiers 
	ofstream monFlux(nomFichier.c_str());
	// Déclare le flux de fichiers monFlux1 avec ios::app pour modifier un fichier sans l'écraser 
	ofstream monFlux1("C:/Users/Mehdi/Documents/Programmation/C++/Test1.txt", ios::app);

	if (monFlux) // Permet de vérifier l'accesibilité d'un fichier 
	{
		// Tout est ok 
		monFlux << "Bonjour, je suis une phrase ecrite dans un fichier." << endl;   // Ecrire dans un nouveau fichier
		monFlux << 42.4444 << endl;
		int age(23);
		monFlux << "J'ai environ " << age << " ans." << endl;
	}
	else
	{
		cout << "ERREUR : Impossible d'ouvrir le fichier" << endl;
	}

	if (monFlux1)
	{
		monFlux1 << "Bonjour, je rajoute une phrase ecrite dans un fichier." << endl;   // Modifier un fichier 
		monFlux1 << 21.102001 << endl;
		int age(19);
		monFlux1 << "J'ai " << age << " ans." << endl;
	}
	else
	{
		cout << "ERREUR : Impossible d'ouvrir le fichier" << endl;
	}

	// Trois facon de lire un fichier 

	ifstream monFlux2(nomFichier.c_str());
	//1
	string ligne;  // Déclaration d'une chaine de caracteres qui contiendra la premiere ligne d'un fichier
	getline(monFlux2, ligne); // Copie/colle la 1ere ligne du fichier avec le flux 2 dans la chaine ligne 
	//2
	double nombre, nombre1;
	monFlux2 >> nombre; // Copie colle un nombre a virgule du fichier de monFlux2
	string mot;
	monFlux2 >> mot;  // Copie colle un mot du fichier de monFlux2
	//3
	char a, b;
	monFlux2.get(a); // Copi colle un caractere du fichier dans a (ici un espace)

	cout << ligne << endl << nombre << endl << mot << endl << a << endl << endl;

	// Lecture du fichier en entier 

	ifstream monFlux3("C:/Users/Mehdi/Documents/Programmation/C++/Test1.txt");

	if(monFlux3)
	{
		string ligneFichier;

		while (getline(monFlux3, ligneFichier))  // Tant qu'on n'est pas à la fin, on lit
		{
			cout << ligneFichier << endl;
		}
	}
	else
	{
		cout << "ERREUR : Impossible d'ouvrir le fichier Test1 " << endl;
	}

	return 0;
}