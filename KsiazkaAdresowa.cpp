#include "KsiazkaAdresowa.h"

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    uzytkownikManadzer.wybierzOpcjeZMenuGlownego();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    adresatManager.wybierzOpcjeZMenuUzytkownika();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManadzer.logowanieUzytkownika();
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
    adresatManager.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatManager.wyswietlWszystkichAdresatow();
}
