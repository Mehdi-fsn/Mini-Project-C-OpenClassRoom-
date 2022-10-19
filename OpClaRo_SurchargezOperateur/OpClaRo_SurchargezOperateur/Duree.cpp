#include "Duree.h"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes) 
{
	if ((secondes / 60) >= 1)
	{
		secondes = (secondes % 60);
		minutes += (secondes / 60);
	}
	if ((minutes / 60) >= 1)
	{
		minutes = (minutes % 60);
		heures += (minutes / 60);

	}
}

bool Duree::estEgal(Duree const& b) const
{
	return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estPlusPetit(Duree const& b) const
{
	if (m_heures < b.m_heures)
	{
		return true; 
	}
	else if (m_minutes < b.m_minutes && m_heures <= b.m_heures)
	{
		return true;
	}
	else if (m_secondes < b.m_secondes && m_minutes <= b.m_minutes && m_heures <= b.m_heures)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Duree Duree::addition(Duree const& b) const
{
	Duree resultat;

	resultat.m_secondes = (m_secondes + b.m_secondes);
	resultat.m_minutes = m_minutes + b.m_minutes + (resultat.m_secondes / 60);
	resultat.m_secondes %= 60;
	resultat.m_heures = m_heures + b.m_heures + (resultat.m_minutes / 60);
	resultat.m_minutes %= 60;
	return resultat;

}

void Duree::afficher(ostream &flux) const
{
	flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}


bool operator==(Duree const& a, Duree const& b)
{
	return a.estEgal(b);
}
 
bool operator!=(Duree const& a, Duree const& b)
{
	if (a == b)
	{
		return false; 
	}
	else
	{
		return true;
	}
}

bool operator<(Duree const& a, Duree const& b)
{
	return a.estPlusPetit(b);
}

bool operator>(Duree const& a, Duree const& b)
{
	return !(a < b);
}

bool operator<=(Duree const& a, Duree const& b)
{
	return (a.estEgal(b) || a.estPlusPetit(b));
}

bool operator>=(Duree const& a, Duree const& b)
{
	return (a.estEgal(b) || !a.estPlusPetit(b));
}

Duree operator+(Duree const& a, Duree const& b)
{
	Duree resultat; 
	resultat = a.addition(b);
	return resultat;
}

ostream& operator<<(ostream& flux, Duree const& duree)
{
	duree.afficher(flux);
	return flux;
}