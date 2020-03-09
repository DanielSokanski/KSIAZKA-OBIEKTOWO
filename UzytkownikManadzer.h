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

public:
    int idZalogowanegoUzytkownika;
    UzytkownikManadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wczytajZnak();
    int logowanieUzytkownika();
    string wczytajLinie();
};
#endif

