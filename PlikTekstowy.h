#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include<iostream>
#include<fstream>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }
    string pobierzNazwePliku()
    {
        return NAZWA_PLIKU;
    }

    bool czyPlikJestPusty();

};

#endif // PLIKTEKSTOWY_H






