#ifndef UZYTKOWNIKNMANAGER_H
#define UZYTKOWNIKNMANAGER_H

#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
#include <sstream>
#include"MetodyPomocnicze.h"
#include"Uzytkownik.h"
#include"PlikZUzytkownikami.h"

using namespace std;

class UzytkownikManadzer
{

    vector<Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;
public:

    UzytkownikManadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){
    idZalogowanegoUzytkownika = 0;
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    bool czyUzytkownikJestZalogowany();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    void logowanieUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweId);
    int pobierzIdZalogowanegoUzytkownika();
};
#endif

