#pragma once
#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

#include<iostream>
#include<string>
#include"Personnage.h"

class Magicien : public Personnage
{
public: 
	Magicien(std::string nom);
	void bouleDeGlace() const; 
	void bouleDeFeu() const; 
	void sePresenter() const;

private: 
	int m_mana;
};

#endif // !DEF_MAGICIEN


