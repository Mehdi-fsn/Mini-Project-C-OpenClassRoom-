#pragma once
#ifndef DEF_MACLASSE
#define DEF_MACLASSE

#include<iostream>

class MaClasse
{
public:
	static void maMethode();
};

class Personnage
{
public:
	Personnage();
	//Plein de m�thodes
	static int nombresInstances(); // renvoie le nombre d'objet cr�es
	~Personnage();

private: 
	static int compteur;
};

#endif // !DEF_MACLASSE
