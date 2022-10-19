#pragma once
#ifndef DEF_ZFRACTION
#define DEF_ZFRACTION

#include<iostream>

class Zfraction
{

public:
	
	// Constructeur
	Zfraction(int numerateur = 0, int denominateur = 1); 

	// Méthodes
	std::ostream& mettreEnFormeFraction(std::ostream& flux) const;
	void simplifierFraction();
	Zfraction addition(Zfraction const& a) const;
	Zfraction multiplication(Zfraction const& a) const;
	bool superieur(Zfraction const& a) const;
	bool egalite(Zfraction const& a) const;

private : 

	// Attributs
	int m_numerateur;
	int m_denominateur;
	
};

std::ostream& operator<<(std::ostream& flux, Zfraction const& a);

Zfraction operator+(Zfraction const& a, Zfraction const& b);

Zfraction operator*(Zfraction const& a, Zfraction const& b);

bool operator>(Zfraction const& a, Zfraction const& b);

bool operator==(Zfraction const& a, Zfraction const& b);

#endif // !ZFRACTION



