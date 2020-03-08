#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include<iostream>
#include<vector>
#include<fstream>
#include"Uzytkownik.h"
#include"MetodyPomocnicze.h"
#include <cstdlib>
using namespace std;

class PlikZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    vector<Uzytkownik> uzytkownicy;
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
 public:
     PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI): nazwaPlikuZUzytkownikami (NAZWAPLIKUZUZYTKOWNIKAMI) {};

    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    void zapiszWszystkichUzytkownikowDoPliku(Uzytkownik uzytkownik);
};
#endif
