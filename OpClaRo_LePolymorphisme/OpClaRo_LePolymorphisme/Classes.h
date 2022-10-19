#pragma once
#ifndef DEF_CLASSES
#define DEF_CLASSES

#include<vector>
#include<string>

class Vehicule
{
public: 
	Vehicule(int numeroDeSerie, int prix, int anneeFabrication);
	virtual void affiche() const; // Affiche description de véhicule
	virtual int getNbRoues() const = 0; // = 0, permet de dire que c'est une méthode virtuelle pure soit qu'on en a pas besoin dans notre classe mère
	void afficheAnneeFabrication() const;
	int getPlacementDansLeGarage() const;
	virtual ~Vehicule();
	std::string m_type;

protected:
	int m_prix; // Chaque vehicule a un prix
	int m_anneeFabrication;
	int m_placementDansLeGarage;
	int nbRoues;
};

class Voiture : public Vehicule // Une voiture EST UN vehicule 
{
public:
	Voiture(int numeroDeSerie, int prix, int anneeFabrication, int portes);
	virtual void affiche() const; // le "virtual" ici n'est pas nécessaire puisque la méthode hérite de la virualité de la méthode mère, c'est uniquement pour s'en rappeler 
	virtual int getNbRoues() const;
	virtual ~Voiture();

protected:
	int m_portes; // Nombre de portes
};

class Moto : public Vehicule // Une moto EST UN vehicule
{
public:
	Moto(int numeroDeSerie, int prix, int anneeFabrication, double vitesseMax);
	virtual void affiche() const; // le "virtual" ici n'est pas nécessaire puisque la méthode hérite de la virualité de la méthode mère, c'est uniquement pour s'en rappeler 
	virtual int getNbRoues() const;
	virtual ~Moto();

protected:
	double m_vitesse; // Vitesse max de la moto
};

class Camion : public Vehicule
{
public: 
	Camion(int numeroDeSerie, int prix, int anneeFabrication, int poids);
	virtual void affiche() const;
	virtual int getNbRoues() const;
	virtual ~Camion();

protected:
	int m_poids;
};

class Garage
{
public:
	Garage();
	void ajouterUnVehicule(Vehicule* const& vehiculeAAjouter);
	void supprimerUnVehicule(int pacementVehiculeDansLeGarage);
	void afficherInfoVehicule(int placementVehiculeDansLeGarage);
	void afficherInfoCollection();
	~Garage();

private:
	std::vector<Vehicule*> m_listeVehicule;
};

#endif // !DEF_CLASSES


