#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikManadzer.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManadzer.wypiszWszystkichUzytkownikow();
}
