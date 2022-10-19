#include "Magicien.h"
#include<iostream>
#include<string>

using namespace std;

Magicien::Magicien(string nom) : Personnage(nom), m_mana(100) {}

void Magicien::sePresenter() const
{
	Personnage::sePresenter(); 
	cout << "Et je suis un MAGICIEENN" << endl; 
}
