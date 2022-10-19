// OpClaRo_LePolymorphisme.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Classes.h"
#include <iostream>
#include<string>
#include<vector>

using namespace std;

void presenter(Vehicule const& v)
{
	v.affiche();
}

int main()
{

	Garage maCollection;	

	maCollection.ajouterUnVehicule(new Moto(0, 7000, 2010, 300)); // Ordre d'arrivée dans le garage, coût, année de fabrication, vitesse max pour une moto
	maCollection.ajouterUnVehicule(new Voiture(1, 10000, 2015, 4)); // ""				""					""					, nombre de portes pour une voiture
	maCollection.ajouterUnVehicule(new Camion(2, 20000, 2020, 50));

	maCollection.afficherInfoVehicule(1);
	maCollection.afficherInfoVehicule(2);

	maCollection.afficherInfoCollection();

	maCollection.supprimerUnVehicule(0);
	maCollection.supprimerUnVehicule(2);

	maCollection.afficherInfoCollection();

	
	maCollection.~Garage();

	return 0;
	// Code sans les petits exercices à la fin de collection heterogene 

	/*
	vector<Vehicule*> listeVehicule;

	listeVehicule.push_back(new Voiture(15000, 2017, 5));
	// Création dans ma collection une voiture valant 
	// 15 k€ et qui 5 portes
	listeVehicule.push_back(new Voiture(12000, 2015, 3)); // idem
	listeVehicule.push_back(new Moto(2000, 2009, 212.5));
	// Création dans ma collection une moto valant 2k€ 
	// allant à une vitesse max de 212.5 km/h
	listeVehicule.push_back(new Camion(50000, 2021, 10));


	listeVehicule[0]->affiche(); // Affiche que c'est une voiture 
	listeVehicule[2]->affiche(); // Affiche que c'est une moto
	listeVehicule[3]->affiche(); 




	// On supprime notre collection à la fin 

	for (int i(0); i < listeVehicule.size(); i++)
	{
		delete listeVehicule[i];
		listeVehicule[i] = 0;
	}
	*/

	/*
	
	Vehicule* v(0); // Création d'un pointeur sur un véhicule ou type de véhicule
	v = new Voiture; // Affectation dynamique d'un objet de type Voiture au pointeur Vehicule
	// On crée une voiture et on met son adresse dans un pointeur de Vehicule

	v->affiche(); // on affiche "Ceci est une voiture"

	delete v;

	*/
	

	return 0;
}
