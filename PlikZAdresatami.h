#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include<iostream>
#include<vector>
#include<fstream>
#include"Adresat.h"
#include"MetodyPomocnicze.h"
#include"PlikTekstowy.h"
#include <cstdlib>
using namespace std;

class PlikZAdresatami:public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    string NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWO;
    int idOstatniegoAdresata;
    //bool czyPlikJestPusty(fstream &plikTekstowy);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {
    NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWO = "Adresaci_tymczasowo.txt";
    idOstatniegoAdresata = 0;};
    //PlikZAdresatami(string nazwaPlikuZAdresatami): NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami) {
    //NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWO = "Adresaci_tymczasowo.txt";
    //idOstatniegoAdresata = 0;};
    void ustawNazwePlikuTymczasowego(string nazwaPlikuZAdresatamiTymczasowo);
    string pobierzNazwePlikuTymczasowego();
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();

    //PlikTekstowy::czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int zwrocNumerLiniiSzukanegoAdresata(int idEdytowanegoAdresata);
    void edytujWybranegoAdresataWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
   // void dopisz(string tekst);

};


#endif
