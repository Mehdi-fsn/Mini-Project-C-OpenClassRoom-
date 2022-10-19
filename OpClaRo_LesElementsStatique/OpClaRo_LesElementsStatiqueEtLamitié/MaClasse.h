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
	//Plein de méthodes
	static int nombresInstances(); // renvoie le nombre d'objet crées
	~Personnage();

private: 
	static int compteur;
};

#endif // !DEF_MACLASSE
