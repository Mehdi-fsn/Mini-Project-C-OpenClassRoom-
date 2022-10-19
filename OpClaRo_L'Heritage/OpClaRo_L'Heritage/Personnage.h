#pragma once
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include<iostream>
#include<string>

class Personnage
{
public:
	Personnage(std::string nom);
	void recevoirDegats(int degats);
	void coupDePoing(Personnage& cible) const;
	void sePresenter() const;

protected: // Priv� mais accessible aux classes filles (Guerrier, Magicien) 
	int m_vie;
	std::string m_nom;
};

#endif // !DEF_PERSONNAGE


