// OpClaRo_LesPointeurs.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
using namespace std;
void quelageUtilisateur();

int main()
{
    // Pointeur
    int ageUtilisateur(20);
    int *pointeur;
    pointeur = &ageUtilisateur;

    cout << "L'adresse de la variable est " << pointeur << " " << &ageUtilisateur << endl <<endl;

    // Allocation dynamique de la mémoire
    int* pointeur1;
    pointeur1 = new int; // Créer la case mémoire qui n'a pas de nom accesible uniquement grace au pointeur
    *pointeur1 = 2;

    cout << "Valeur de la case memoire sur laquelle pointe le pointeur1 : " << *pointeur1 << endl << endl;
    // Libérez de la mémoire
    delete pointeur1; // Supprime la case dont le pointeur1 pointé et qui contenait la valeur 2
    pointeur1 = 0; // Très important que le pointeur ne pointe rien puisque la case en question ne lui appartient plus 
    
    // Exemple : demandez l'âge de l'utilisateur 
    quelageUtilisateur();
    
    
    return 0;
}

void quelageUtilisateur()
{
    int* pointeur(0);
    pointeur = new int;

    cout << "Quel est votre age ? " << endl;
    cin >> *pointeur;

    cout << "Vous avez " << *pointeur << " ans." << endl;

    delete pointeur;
    pointeur = 0;
}