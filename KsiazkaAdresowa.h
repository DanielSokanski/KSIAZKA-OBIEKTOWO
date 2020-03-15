#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include<iostream>
#include"UzytkownikManadzer.h"
#include"AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManadzer uzytkownikManadzer;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWO;

public:
    KsiazkaAdresowa(string NazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami, string nazwaPlikuZAdresatamiTymczasowo) :
        uzytkownikManadzer(NazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami),
        NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWO(nazwaPlikuZAdresatamiTymczasowo)
    {
    adresatManager = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatManager;
        adresatManager = NULL;
    };
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void logowanieUzytkownika();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
};
#endif
