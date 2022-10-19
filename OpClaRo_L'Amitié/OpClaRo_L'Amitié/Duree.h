#pragma once
#ifndef DEF_DUREE
#define DEF_DUREE

#include<iostream>

class Duree
{
public: 
	Duree(int heures, int minutes, int secondes);


private: 
	void affiche(std::ostream& out) const; // permet d'ecrire la durée dans un flux
	int m_heures;
	int m_minutes;
	int m_secondes;

friend std::ostream& operator<<(std::ostream& out, Duree const& dureeAAfficher); // cette fonction est amie de la classe Duree
};


#endif // !DEF_DUREE


