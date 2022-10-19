// OpClaRo_L'Heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include"Personnage.h"
#include"Guerrier.h"
#include"Magicien.h"
#include <iostream>

int main()
{
    Personnage mehdi("Mehdi");
    Magicien merlin("Merlin");
    
    mehdi.sePresenter();
    // Appel de la méthodes de la classe Personnage 
    merlin.sePresenter();
   // Appel de la méthodes de la classe Magicien qui masque celle de Personnage

    return 0;
}
