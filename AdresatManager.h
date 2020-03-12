#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
#include <sstream>
#include <algorithm>

#include"UzytkownikManadzer.h"
#include"PlikZUzytkownikami.h"
#include"PlikZAdresatami.h"
#include"Adresat.h"
#include"Uzytkownik.h"
#include"MetodyPomocnicze.h"
using namespace std;

class AdresatManager
{

    vector<Adresat> adresaci;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    PlikZAdresatami plikZAdresami;
    int idZalogowanegoUzytkownika;

public:
    AdresatManadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) :
        plikZAdresami(nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA (idZalogowanegoUzytkownika)
        {
        adresaci = plikZAdresami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
        }
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    char wybierzOpcjeZMenuUzytkownika();

};



#endif
