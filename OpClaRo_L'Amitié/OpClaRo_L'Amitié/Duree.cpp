#include "Duree.h"
#include<iostream>

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes) {}

void Duree::affiche(ostream& out) const
{
	cout << "La duree est de " << m_secondes << "h " << m_minutes << "m " << m_secondes << "s." << endl;
}

ostream& operator<<(ostream& out, Duree const& duree)
{
	duree.affiche(out);
	return out;
}