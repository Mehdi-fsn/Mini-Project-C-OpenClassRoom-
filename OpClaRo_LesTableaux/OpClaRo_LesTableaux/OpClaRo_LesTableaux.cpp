#include<iostream>
#include<vector>
using namespace std;

void notess(vector<double> &notes) // Prototype d'une fonction avec tableau dynamique en passage par référence 
{
	notes.push_back(12.5);
	notes.push_back(19.5);
	notes.push_back(6); 
	notes.push_back(12);
	notes.push_back(14.5);
	notes.push_back(15);
}

int main()
{
	vector<double> notes; // Tableau vides 

	notess(notes); // Appel de la fonction notess avec un tableau dynamique en arguments

	double moyenne(0);
	for (int i(0); i < notes.size(); i++)
	{
		moyenne += notes[i];
	}
	moyenne /= notes.size();

	cout << "Votre moyenne est : " << moyenne << endl;
	return 0;


	// Exemple tableau dynamique
	/*
	int const nombreMeilleurScores(5);
	vector<int> meilleurScores(nombreMeilleurScores); // Crée un tableau dynamique 

	meilleurScores[0] = 118218;
	meilleurScores[1] = 100432;
	meilleurScores[2] = 87347;
	meilleurScores[3] = 64523;
	meilleurScores[4] = 31345;

	meilleurScores.push_back(8); // Rajoute une case dans le tableau avec la valeur 8
								 // Possibilité de supprimer la derniere case du tableau avec l'instruction : pop_back()

	int const taille(meilleurScores.size());   // Variable contenant la taille du tableau

	cout << meilleurScores[5] << endl << taille << endl; // Affiche la case 6 avec la valeur 8 + la taille du tableau 
	return 0;
	*/
}








































/*

// Tableau statique avec fonction

* Calcule la moyenne des 6 notes
* tableau des notes, nombreNotes
* Retourne la moyenne 

double moyenneNotes(double notes[], int const nombreNotes) // fonctionne aussi avec le pointeur "double* notes"
{
	double moyenne(0);
	for (int i = 0; i < nombreNotes; i++)
	{
		moyenne += notes[i];
	}
	moyenne /= nombreNotes;
	return moyenne;

}

int main()
{
	int const nombreNotes(6);
	double notes[nombreNotes];
	double moyenne;

	notes[0] = 12.5;
	notes[1] = 19.5;
	notes[2] = 6;
	notes[3] = 12;
	notes[4] = 14.5; 
	notes[5] = 15;

	moyenne = moyenneNotes(notes, nombreNotes);
	cout << moyenne << endl;
	return 0;

	// Tableau statique sans fonction 
	
	int const tailleTableauint(5);
	int const tailleTableaudouble(3);
	int meilleurScore[tailleTableauint];   // declare un tableau de 5 int
	double angleTriangle[tailleTableaudouble];    // declare un tableau de 3 double

	meilleurScore[0] = 100000;
	meilleurScore[1] = 80000;
	meilleurScore[2] = 50000;
	meilleurScore[3] = 30000;
	meilleurScore[4] = 20000;

	for (int i = 0; i < tailleTableauint; i++)
	{
		cout << meilleurScore[i] << endl;  // Affiche les cases du tableau les unes apres les autres 
	}
	
}
*/