#pragma once
#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include<iostream>
#include<string>
#include"Personnage.h"
// Ne pas oublier d'inclure le fichier .h de la classe M�re 

class Guerrier : public Personnage
// Signifie que Guerrier (classe Fille) est un classe qui h�rite de la classe Personnage (classe M�re) 
{
public: 
	void frappeDeGuerrier() const;
	// M�thodes unique � la classe Guerrier


};

#endif // !DEF_GUERRIER


