#ifndef UZYTKOWNIKNMANAGER_H
#define UZYTKOWNIKNMANAGER_H

#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
#include <sstream>

#include"Uzytkownik.h"
#include"PlikZUzytkownikami.h"

using namespace std;

class UzytkownikManadzer
{
    int idZalogowanegoUzytkownika;
    vector<Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif

