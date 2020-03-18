#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include<iostream>
#include<vector>
#include<windows.h>
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
    PlikZAdresatami plikZAdresatami;
    int idZalogowanegoUzytkownika;
    void wyswietlDaneAdresata(Adresat adresat);
public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) :
        plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA (idZalogowanegoUzytkownika)
        {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
        };
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    char wybierzOpcjeZMenuUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    void wyszukajAdresatowPoNazwisku();
    int usunAdresata();
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void edytujAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    string zamienDanePojedynczegoAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(int idAdresata);
};



#endif
