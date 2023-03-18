#include <iostream>
#include <string>

using namespace std;

struct osoba
{
    int id;
    string imie;
    string nazwisko;
};

osoba *tab[1000]; // dynamicznie - tablica wskaźników
int n = 0;

void wstaw();
void wypisz();
void usun();

int main()
{
    wstaw();
    wypisz();
    usun();
    return 0;
}

void wstaw()
{
    string s;
    while (true)
    {
        cout << "Imie: ";
        getline(cin, s);
        if (s.length() == 0)
            break;
        tab[n] = new osoba;
        tab[n]->imie = s;
        cout << "Nazwisko: ";
        getline(cin, s);
        tab[n]->nazwisko = s;
        tab[n]->id = n + 1;
        n++;
    }
}

void wypisz()
{
    for (int i = 0; i < n; i++)
    {
        cout << "---------------------------------" << endl
             << "ID: " << tab[i]->id
             << " Imie: " << tab[i]->imie
             << " Nazwisko: " << tab[i]->nazwisko
             << endl;
    }
    cout << "---------------------------------" << endl;
}

void usun()
{
    for (int i = 0; i < n; i++)
    {
        delete tab[i];
        tab[i] = NULL;
    }
}