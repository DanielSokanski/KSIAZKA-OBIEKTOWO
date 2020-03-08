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
using namespace std;

class AdresatManager
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector<Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();
public:
    //AdresatManadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    //wczytajIdOstatniegoAdresata()
    string wczytajLinie1();
    char wczytajZnak1();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int dodajAdresata();
    char wybierzOpcjeZMenuUzytkownika();
};



#endif
