// OpClaRo_LesObjets.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<string>
#include "Personnage.h"
using namespace std;

int main()
{
    /*
    Personnage david, goliath;
    // Création de 2 objets de type Personnage : perso1 nommé david et perso 2 nommé goliath
    // En fait on appelle leur constructeur pour intialiser leurs attributs
    */
    string nomPerso1, nomPerso2;
    cout << "Saissisez le nom du premier personnage " << endl;
    cin >> nomPerso1;
    cout << "Saissisez le nom du deuxieme personnage " << endl;
    cin >> nomPerso2;
    cout << endl;

    Personnage perso1(nomPerso1), perso2(nomPerso2, "Epee aiguisee", 20);
    // Constructeur par défaut pour david et constructeur surchargé pour goliath

    perso2.attaquer(perso1); // goliath attaque david
    perso1.boirePotionDeVie(20); // david récupère 20 de vie en buvant une potion 
    perso2.attaquer(perso1); // goliath réattaque david
    perso1.attaquer(perso2); // david contre attaque...
    perso2.changerArme("Double hache tranchante veneuse de la mort", 40);
    perso2.attaquer(perso1);
    perso1.attaqueMana(perso2, 100);
    perso1.estVivant();
    perso2.estVivant();
    
    // Temps mort ! Voyons la vie de chacun 
    cout << nomPerso1 << endl;
    perso1.afficherEtats();
    cout << endl << nomPerso2 << endl;
    perso2.afficherEtats();

    return 0;

}