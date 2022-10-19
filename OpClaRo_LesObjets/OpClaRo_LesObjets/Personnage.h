#pragma once
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include<iostream>
#include<string>
#include "Arme.h"  // Ne PAS oublier d'inclure Arme.h pour en avoir la d�finition 
#include<iostream>
#include<string>

class Personnage
{
public:

	Personnage(std::string nomPerso); // Constructeur par d�faut
	Personnage(std::string nomPerso, std::string nomArme, int degatsArme); // Constructeur surcharg�

	void recevoirDegats(int nbDegats);
	void attaquer(Personnage& cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	void estVivant() const; // M�thode constante, ne modifie pas un attribut
	std::string getNomPerso() const;
	void afficherEtats() const;
	void attaqueMana(Personnage& cible, int degatsAttaqueMana);

	

private:

	int m_vie;
	int m_mana;
	std::string m_nomPerso;
	Arme m_arme; // Cr�ation d'un objet de la classe Arme
};

#endif
