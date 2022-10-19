#include "Classes.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Méthodes de Vehicule
Vehicule::Vehicule(int placementDansLeGarage, int prix, int anneeFabrication) : m_placementDansLeGarage(placementDansLeGarage), m_prix(prix), m_anneeFabrication(anneeFabrication), m_type("Vehicule") {}

void Vehicule::affiche() const
{
	cout << "Ceci est un vehicule" << endl; 
}

void Vehicule::afficheAnneeFabrication() const
{
	cout << ", fabrique en " << m_anneeFabrication << endl;
}

int Vehicule::getPlacementDansLeGarage() const
{
	return m_placementDansLeGarage;
}

Vehicule::~Vehicule() {}

// Méthodes de Voiture
Voiture::Voiture(int placementDansLeGarage, int prix, int anneFabrication, int portes) : Vehicule(placementDansLeGarage, prix, anneFabrication), m_portes(portes)
{
	m_type = "Voiture";
}

void Voiture::affiche() const
{
	cout << "Ceci est une voiture coutant " << m_prix << " euros et qui a " << m_portes << " portes";
	Vehicule::afficheAnneeFabrication();
}

int Voiture::getNbRoues() const { return 4; }

Voiture::~Voiture() {}

// Méthodes de Moto
Moto::Moto(int placementDansLeGarage, int prix, int anneeFabrication, double vitesseMax) : Vehicule(placementDansLeGarage, prix, anneeFabrication), m_vitesse(vitesseMax)
{
	m_type = "Moto";
}

void Moto::affiche() const
{
	cout << "Ceci est une moto coutant " << m_prix << " euros et qui va a " << m_vitesse << " km/h maximum";
	Vehicule::afficheAnneeFabrication();
}

int Moto::getNbRoues() const { return 2; }

Moto::~Moto() {}

//Méthodes de Camion
Camion::Camion(int placementDansLeGarage, int prix, int anneeFabrication, int poids) : Vehicule(placementDansLeGarage, prix, anneeFabrication), m_poids(poids)
{
	m_type = "Camion";
}

int Camion::getNbRoues() const { return 6; }

void Camion::affiche() const
{
	cout << "Ceci est un camion coutant " << m_prix << " euros et qui peut porter jusqu'a " << m_poids << " tonnes maximum";
	Vehicule::afficheAnneeFabrication();
}

Camion::~Camion() {}

// Méthodes du garage
Garage::Garage() : m_listeVehicule(0) {}

void Garage::ajouterUnVehicule(Vehicule* const& vehiculeAAjouter) // Prend en arguments un poiteur vers un objet de type véhicule ou spécifiactions 
{
	m_listeVehicule.push_back(vehiculeAAjouter);
}

void Garage::supprimerUnVehicule(int placementVehiculeDansLeGarage)
{
	for (int i(0); i < m_listeVehicule.size(); i++)
	{
		if (m_listeVehicule[i]->getPlacementDansLeGarage() == placementVehiculeDansLeGarage)
		{
			delete m_listeVehicule[i];
			m_listeVehicule.erase(m_listeVehicule.begin() + i);		// efface la i ème case après la case 0
		}
	}
}

void Garage::afficherInfoVehicule(int placementVehiculeDansleGarage)
{
	for (int i(0); i < m_listeVehicule.size(); i++)
	{
		if (m_listeVehicule[i]->getPlacementDansLeGarage() == placementVehiculeDansleGarage)
		{
			m_listeVehicule[i]->affiche();
		}
	}
}

void Garage::afficherInfoCollection()
{
	cout << "Nous avons dans notre garage : " << endl;
	for (int i(0); i < m_listeVehicule.size(); i++)
	{
		cout << m_listeVehicule[i]->m_type << endl;
	}
}

Garage::~Garage()
{
	for (int i(0); i < m_listeVehicule.size(); i++)
	{
		delete m_listeVehicule[i];
		m_listeVehicule[i] = 0;
	}
}

