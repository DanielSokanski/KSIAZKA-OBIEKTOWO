#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include<iostream>
#include"UzytkownikManadzer.h"
#include"AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManadzer uzytkownikManadzer;
    AdresatManager adresatManager;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManadzer(nazwaPlikuZUzytkownikami) {
    uzytkownikManadzer.wczytajUzytkownikowZPliku();
    //adresatManager.wczytajAdresatowZPliku();
    };

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int logowanieUzytkownika();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    int dodajAdresata();
};
#endif
