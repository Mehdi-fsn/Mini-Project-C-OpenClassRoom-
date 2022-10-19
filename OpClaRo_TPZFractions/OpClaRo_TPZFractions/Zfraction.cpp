#include "ZFraction.h"
#include<iostream>
#include<string>

using namespace std;

// Constructeur

Zfraction::Zfraction(int numerateur, int denominateur) : m_numerateur(numerateur), m_denominateur(denominateur) 
{
	simplifierFraction();			// Toujours simplifier
}


// Méthode de mise en forme de la fraction 
ostream& Zfraction::mettreEnFormeFraction(ostream &flux) const
{
	if (m_denominateur == 1)
	{
		flux << m_numerateur; // La valeur de la fonction sera de type ostream on s'en servira uniquement pour l'affichage 
	}
	else
	{
		flux << m_numerateur << "/" << m_denominateur; // La valeur de la fonction sera de type ostream on s'en servira uniquement pour l'affichage 
	}
	return flux;
}

// Méthode pour simplifier la fraction à son maximum 
void Zfraction::simplifierFraction()
{
	int resteDivNum;
	int resteDivDen;
	int const num(m_numerateur);
	int const den(m_denominateur);

	if (num < den)			// Si le numérateur est plus petit que le dénominateur
	{
		for (int i(1); i <=num; i++)			// Pour i=1 jusqu'au numerateur  
		{
			resteDivNum = num % i;			// resteDivNum contient le reste de la division du numerateur par i
			resteDivDen = den % i;			// resteDivDen contient le reste de la division du denominateur par i

			if (resteDivNum == 0 && resteDivDen == 0)			// Si  les deux restes des divisions sont égales à 0, alors c'est un potentiel diviseur commun mais on va jusquau plus grand possible 
																// soit le le + petit entre le num et le den 
			{
				m_numerateur = num;			// A chaque passage dans la condition m_numerateur reprend sa valeur de base 
				m_numerateur /= i;			// Le numérateur de la fraction est divisé par le plus grand diviseur possible 

				m_denominateur = den;		// Idem pour le dénominateur
				m_denominateur /= i;		
			}

		}
	}
	else if (den < num)			// Si le dénominateur est plus petit que le numérateur
	{
		for (int i(1); i <= den; i++)			// Pour i=1 jusqu'au dénominateur   
		{
			resteDivNum = num % i;			// resteDivNum contient le reste de la division du numerateur par i
			resteDivDen = den % i;			// resteDivDen contient le reste de la division du denominateur par i

			if (resteDivNum == 0 && resteDivDen == 0)			// Si  les deux restes des divisions sont égales à 0, alors ce serait 
																// soit le le + petit entre le num et le den 
			{
				m_numerateur = num;
				m_numerateur /= i;			// Le numérateur de la fraction est divisé par le plus grand diviseur possible 

				m_denominateur = den;
				m_denominateur /= i;		// Idem pour le dénominateur
			}

		}
	}
	else
	{
		m_numerateur = 1;
		m_denominateur = 1;
	}
}


Zfraction Zfraction::addition(Zfraction const& a) const
{
	Zfraction resultatAdd;

	resultatAdd.m_denominateur = m_denominateur * a.m_denominateur;

	resultatAdd.m_numerateur = ((resultatAdd.m_denominateur / m_denominateur) * m_numerateur) + ((resultatAdd.m_denominateur / a.m_denominateur) * a.m_numerateur);

	resultatAdd.simplifierFraction();

	return resultatAdd;
}

Zfraction Zfraction::multiplication(Zfraction const& a) const
{
	Zfraction resultatMul;

	resultatMul.m_denominateur = m_denominateur * a.m_denominateur;
	resultatMul.m_numerateur = m_numerateur * a.m_numerateur;

	resultatMul.simplifierFraction();

	return resultatMul;
}

bool Zfraction::superieur(Zfraction const& a) const
{

	double f1, f2, num(m_numerateur), den(m_denominateur), num1(a.m_numerateur), den1(a.m_denominateur); // car impossible de diviser deux nombres entiers et d'obtenir un nombre flottant
	
	f1 = num / den; 
	f2 = num1 / den1;

	return (f1 > f2); // return true si c'est vrai sinon false 
}

bool Zfraction::egalite(Zfraction const& a) const
{
	double f1, f2, num(m_numerateur), den(m_denominateur), num1(a.m_numerateur), den1(a.m_denominateur); // car impossible de diviser deux nombres entiers et d'obtenir un nombre flottant

	f1 = num / den;
	f2 = num1 / den1;

	return (f1 == f2);
}


// Fonctions externe à la classe Zfraction 

ostream& operator<<(ostream& flux, Zfraction const& a)
{
	return a.mettreEnFormeFraction(flux);

}


Zfraction operator+(Zfraction const& a, Zfraction const& b)
{
	return a.addition(b);
}

Zfraction operator*(Zfraction const& a, Zfraction const& b)
{
	return a.multiplication(b);
}

bool operator>(Zfraction const& a, Zfraction const& b)
{
	return a.superieur(b);
}

bool operator==(Zfraction const& a, Zfraction const& b)
{
	return a.egalite(b);
}
