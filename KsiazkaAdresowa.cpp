#include "KsiazkaAdresowa.h"

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikManadzer.czyUzytkownikJestZalogowany();
}
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    uzytkownikManadzer.wybierzOpcjeZMenuGlownego();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    adresatManager -> wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManadzer.logowanieUzytkownika();
    if (uzytkownikManadzer.czyUzytkownikJestZalogowany())
    {
        adresatManager = new AdresatManager (NAZWA_PLIKU_Z_ADRESATAMI,NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWO, uzytkownikManadzer.pobierzIdZalogowanegoUzytkownika());
    }

}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikManadzer.czyUzytkownikJestZalogowany())
    {
        adresatManager->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, najpierw nalezy sie zalogowac" << endl;
        system ("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikManadzer.czyUzytkownikJestZalogowany())
    {
        adresatManager -> wyswietlWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wyswietlic adresata, najpierw nalezy sie zalogowac" << endl;
        system ("pause");
    }
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikManadzer.wylogowanieUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatManager->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatManager->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatManager->usunAdresata();
}

