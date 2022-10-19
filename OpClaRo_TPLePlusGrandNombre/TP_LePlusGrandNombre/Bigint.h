#pragma once
#ifndef DEF_BIGINT
#define DEF_BIGINT
#include<iostream>
#include<string>
#include<vector>

class Bigint
{
public : 
	Bigint(std::string grandNombre);
	void afficherNombre() const;
	void afficherNombreInt() const;
	void convertirEnInt();
	bool estEgal(Bigint const& b) const;


private : 
	std::vector<std::string> m_grandNombre;
	std::vector<int> m_grandNombreInt;
	std::string m_chaineDuNombre;
};

bool operator==(Bigint const& a, Bigint const& b);

#endif // !DEF_BIGINT


