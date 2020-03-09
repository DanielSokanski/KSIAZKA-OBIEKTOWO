#include "AdresatManager.h"

int AdresatManager::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    //dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}
string AdresatManager::wczytajLinie1()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

Adresat AdresatManager::podajDaneNowegoAdresata()
{

    Adresat adresat;
    adresat.ustawId(idOstatniegoAdresata+1);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);
    cout << "Id ostatniego adresata" << idOstatniegoAdresata << endl;
    cout << "Id zalogowanego uzytkownika" << idZalogowanegoUzytkownika << endl;
    cout << "Podaj imie: ";
    adresat.ustawImie(wczytajLinie1());
    //adresat.ustawImie(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(wczytajLinie1());
    //adresat.ustawNazwisko(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(wczytajLinie1());

    cout << "Podaj email: ";
    adresat.ustawEmail(wczytajLinie1());

    cout << "Podaj adres: ";
    adresat.ustawAdres(wczytajLinie1());

    return adresat;
}


string AdresatManager::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

char AdresatManager::wczytajZnak1()
{
    string wejscie = "";
    char znak  = {0};

    while (true)
    {
        getline(cin, wejscie);

        if (wejscie.length() == 1)
        {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}
char AdresatManager::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak1();

    return wybor;
}

void AdresatManager::wyswietlDaneAdresata()
{
    Adresat adresat;
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}

void AdresatManager::wyswietlWszystkichAdresatow()
{
    Adresat adresat;
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i=0; i<adresaci.size(); i++)
        //for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
                cout << endl << "Id:                 " << adresaci[i].pobierzId() << endl;
                cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
                cout << "Nazwisko:           " << adresaci[i].pobierzNazwisko() << endl;
                cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTelefonu() << endl;
                cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
                cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

