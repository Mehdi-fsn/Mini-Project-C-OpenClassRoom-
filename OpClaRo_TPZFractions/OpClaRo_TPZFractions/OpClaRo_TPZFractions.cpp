// OpClaRo_TPZFractions.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"ZFraction.h"

using namespace std;

int main()
{
    Zfraction a(4, 5), b(2), c, d;
        
    c = a + b;

    d = a * b;

    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;

    if (a > b)
    {
        cout << "a est plus grand b" << endl;
    }
    else if (a == b)
    {
        cout << "Les fractions a et b sont égales" << endl;
    }
    else
    {
        cout << "a est plus petit b" << endl;
    }

    return 0;
}

