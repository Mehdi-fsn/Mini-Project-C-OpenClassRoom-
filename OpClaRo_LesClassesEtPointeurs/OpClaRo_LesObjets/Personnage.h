#pragma once
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include<iostream>
#include<string>
#include "Arme.h"  // Ne PAS oublier d'inclure Arme.h pour en avoir la définition 
#include<iostream>
#include<string>

class Personnage
{
public:

	Personnage(std::string nomPerso); // Constructeur par défaut
	Personnage(std::string nomPerso, std::string nomArme, int degatsArme); // Constructeur surchargé
	Personnage(Personnage const& personnageACopier); // Constructeur de copie
	~Personnage(); // Destructeur

	void recevoirDegats(int nbDegats);
	void attaquer(Personnage& cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	void estVivant() const; // Méthode constante, ne modifie pas un attribut
	std::string getNomPerso() const;
	void afficherEtats() const;
	void attaqueMana(Personnage& cible, int degatsAttaqueMana);
	Personnage& operator=(Personnage const& personnageACopier);

private:

	int m_vie;
	int m_mana;
	std::string m_nomPerso;
	Arme *m_arme; // Création d'un objet de la classe Arme
};


#endif
