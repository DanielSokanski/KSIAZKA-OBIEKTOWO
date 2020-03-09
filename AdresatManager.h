#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
#include <sstream>
#include <algorithm>
#include"MetodyPomocnicze.h"
#include"UzytkownikManadzer.h"
#include"PlikZUzytkownikami.h"
#include"Adresat.h"
#include"Uzytkownik.h"
using namespace std;

class AdresatManager
{
    Uzytkownik uzytkownik;
    int idOstatniegoAdresata=1;
    vector<Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();
public:
    //AdresatManadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    //wczytajIdOstatniegoAdresata()
    int idZalogowanegoUzytkownika = uzytkownik.pobierzId();
    string wczytajLinie1();
    char wczytajZnak1();
    void wyswietlDaneAdresata();
    void wyswietlWszystkichAdresatow();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int dodajAdresata();
    char wybierzOpcjeZMenuUzytkownika();
};



#endif
