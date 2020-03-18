#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include<iostream>
#include<vector>
#include<fstream>
#include"Uzytkownik.h"
#include"MetodyPomocnicze.h"
#include"PlikTekstowy.h"
#include <cstdlib>
using namespace std;

class PlikZUzytkownikami:public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    fstream plikTekstowy;
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskamiCalegoWektora(vector<Uzytkownik> uzytkownicy, int i);
    vector<Uzytkownik> uzytkownicy;
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
 public:
    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami): PlikTekstowy(nazwaPlikuZUzytkownikami){};
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    void zapiszWszystkichUzytkownikowDoPliku(vector<Uzytkownik> uzytkownicy);
};
#endif
