#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include<iostream>
#include<vector>
#include<fstream>
#include"Adresat.h"
#include"MetodyPomocnicze.h"
#include <cstdlib>
using namespace std;

class PlikZAdresatami
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    bool czyPlikJestPusty(fstream &plikTekstowy);

    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
public:
    PlikZAdresatami(string nazwaPlikuZAdresatami): NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami) {
    idOstatniegoAdresata = 0;};
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    bool czyPlikJestPusty();
    int konwersjaStringNaInt(string liczba);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
};


#endif
