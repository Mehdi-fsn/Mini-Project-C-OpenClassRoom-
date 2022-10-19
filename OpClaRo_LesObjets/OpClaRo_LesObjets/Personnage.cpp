#include"Personnage.h"
#include<iostream>
#include<string>

using namespace std;

// Constructeur
Personnage::Personnage(string nomPerso) : m_nomPerso(nomPerso), m_vie(100), m_mana(100) {} // + Appel du constructeur arme par d�faut car pas de parametres pour l'arme

// Constructeur surcharg�
Personnage::Personnage(string nomPerso, string nomArme, int degatsArme) : m_nomPerso(nomPerso), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme) {} // + Appel du constructeur surcharg� de Arme


void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	// On enl�ve le nombre de d�gats recus a la vie du personnage

	if (m_vie < 0) // Pour �viter d'avoir une vie n�gative 
	{
		m_vie = 0; // On met la vie � 0 (mort)
	}
}

void Personnage::attaquer(Personnage& cible) // Arguments est la cible qui � le type de la class Personnage
{
	cible.recevoirDegats(m_arme.getDegats()); // On utilise la m�thode getdegats pour avoir la valeur des degats retourn�
	// On inflige � la cible les d�gats que cause notre arme

	cout << m_nomPerso << " attaque " << cible.getNomPerso() << " => ";
	m_arme.afficher();

}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;

	if (m_vie > 100)
	{
		m_vie = 100;
	}

	cout << m_nomPerso << " boit une potion qui lui rapporte " << quantitePotion << " de vie" << endl << endl;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
	
	cout << m_nomPerso << " change d'arme pour : " << nomNouvelleArme << " avec " << degatsNouvelleArme << " de degats" << endl << endl;
}

void Personnage::estVivant() const
{
	if (m_vie > 0 )
	{
		cout << m_nomPerso << " est vivant !" << endl << endl;
	}
	else
	{
		cout << m_nomPerso << " est mort !" << endl << endl;
	}
}

void Personnage::afficherEtats() const
{
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	m_arme.afficher();
}

string Personnage::getNomPerso() const
{
	return m_nomPerso;
}

void Personnage::attaqueMana(Personnage& cible, int degatsAttaqueMana)
{
	cible.recevoirDegats(degatsAttaqueMana);
	m_mana -= degatsAttaqueMana;
	cout << m_nomPerso << " utilise une attaque de magie de " << degatsAttaqueMana << " degats pour le meme nombre de mana utilise" << endl << endl;
}