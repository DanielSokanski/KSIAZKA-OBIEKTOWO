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
    adresatManager->wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManadzer.logowanieUzytkownika();
    if (uzytkownikManadzer.czyUzytkownikJestZalogowany())
    {
        adresatManager = new AdresatManager (NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikManadzer.pobierzIdZalogowanegoUzytkownika());
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

int KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikManadzer.czyUzytkownikJestZalogowany())
    {
        adresatManager -> dodajAdresata();
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
