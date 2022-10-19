#include "Bigint.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

Bigint::Bigint(string grandNombre)
{
	for (unsigned int i(0); i < grandNombre.size(); i++)
	{
		m_grandNombre.push_back(grandNombre.substr(i, 1));
	}
}


void Bigint::afficherNombre() const
{
	cout << "Voici le nombre => ";
	for (unsigned int i(0); i < m_grandNombre.size(); i++)
	{
		cout << m_grandNombre[i];
	}
	cout << " de taille => " << m_grandNombre.size() << endl;
}

void Bigint::afficherNombreInt() const
{
	cout << "Voici le nombre => ";
	for (unsigned int i(0); i < m_grandNombreInt.size(); i++)
	{
		cout << m_grandNombreInt[i];
	}
	cout << " de taille => " << m_grandNombreInt.size() << endl;
}

void Bigint::convertirEnInt()
{
	string chaineDuNombre;

	for (unsigned int i(0); i < m_grandNombre.size(); i++)
	{
		chaineDuNombre += m_grandNombre[i];
	}
	for (unsigned int i(0); i < chaineDuNombre.size(); i++)
	{
		for (unsigned int j(0); j <= 9; j++)
		{
			if (chaineDuNombre[i] == j)
			{
				m_grandNombreInt[i] = j;
			}
		}
	}
}

bool Bigint::estEgal(Bigint const& b) const
{
	if (m_grandNombre.size() == b.m_grandNombre.size())
	{
		int verifEgal(0);

		for (int i(m_grandNombre.size() - 1); i >= 0; i--)
		{
			if (m_grandNombre[i] == b.m_grandNombre[i])
			{
				verifEgal += 1;
			}
		}
		if (verifEgal == m_grandNombre.size())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool operator==(Bigint const& a, Bigint const& b)
{
	return a.estEgal(b);
}