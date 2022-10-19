#pragma once
#include <iostream>
#include <string>

class Duree
{
public:

	Duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool estEgal(Duree const& b) const;
	bool estPlusPetit(Duree const& b) const;
	Duree addition(Duree const& b) const; 
	void afficher(std::ostream &flux) const;
private:

	int m_heures;
	int m_minutes;
	int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, Duree const& b);
std::ostream& operator<<(std::ostream& flux, Duree const& duree);

