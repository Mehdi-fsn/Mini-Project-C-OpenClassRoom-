// OpClaRo_LesFonctions.cpp :

#include <iostream>
#include<string>

using namespace std;

int ajouteDeux(int);
int addition(int, int);
double multiplication(double, double, double);
string demanderNom();
int carre(int);
void dimensionRectangle(int, int, char);

int main()
{
	/*
	int a(4), b(6), a2(0);

	cout << "Valeur de a : " << a << endl;
	a = ajouteDeux(a); // appel de la fonction
	cout << "Valeur de a : " << a << endl << endl;

	double resultat;
	resultat = addition(a,b);
	cout << "Valeur de a + b : " << resultat << endl;

	double c(0.5);
	resultat = multiplication(a, b, c);
	cout << "Valeur de a*b+c : " << resultat << endl;

	demanderNom();

	a2 = carre(a);
	cout << "Valeur au carre de a : " << a2 << endl;

	return 0;
	*/

	int Largeur, longueur;
	char symboleDessin('&');

	cout << "Donnez la longueur du rectangle : " << endl;
	cin >> longueur;

	cout << "Donnez la largeur du rectangle : " << endl;
	cin >> Largeur;

	cout << endl;
	dimensionRectangle(Largeur, longueur, symboleDessin);

	cout << endl << "Surface du rectangle : " << (Largeur * longueur) << endl;
	return 0;
}

void dimensionRectangle(int L, int l, char symboleDessin)
{
	if (L > 0 && l > 0)
	{
		for (int longueur = 0; longueur < l; longueur++)
		{
			for (int Largeur = 0; Largeur < L; Largeur++)
			{
				cout << symboleDessin << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << endl << "Impossible largeur ou longueur negative" << endl;
	}
	
}


int ajouteDeux(int nombreRecu)
{
	int valeur(nombreRecu + 2); // On crée une case en mémoire
								// On prend le nombre recu en argument, on lui ajoute 2
								// Et  on met tout cela dans la mémoire 
	return valeur;
	// On indique que la valeur qui sort de la fonction est la valeur de la variable 'valeur'
}

int addition(int aa, int bb)
{
	return aa+bb;
}

double multiplication(double aaa, double bbb, double ccc)
{
	return (aaa * bbb) + ccc;
}

string demanderNom()
{
	cout << "Entrez votre nom : " << endl;
	string nom;
	cin >> nom;
	return nom;
}

int carre(int nombreAuCarre)
{
	return nombreAuCarre * nombreAuCarre;
}