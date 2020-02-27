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
    string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    fstream plikTekstowy;
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
 public:
     PlikZUzytkownikami();

    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
};
#endif
