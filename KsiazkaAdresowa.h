#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include<iostream>
#include"UzytkownikManadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManadzer uzytkownikManadzer;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif
