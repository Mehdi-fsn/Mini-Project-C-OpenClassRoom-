#pragma once
#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include<iostream>
#include<string>
#include"Personnage.h"
// Ne pas oublier d'inclure le fichier .h de la classe Mère 

class Guerrier : public Personnage
// Signifie que Guerrier (classe Fille) est un classe qui hérite de la classe Personnage (classe Mère) 
{
public: 
	void frappeDeGuerrier() const;
	// Méthodes unique à la classe Guerrier


};

#endif // !DEF_GUERRIER


