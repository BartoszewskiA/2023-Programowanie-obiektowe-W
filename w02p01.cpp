#include <iostream>

using namespace std;

class osoba
{
public:
    string imie;
    string nazwisko;
    void wizytowka()
    {
        cout << "\n-----------------------------\n"
             << "Imie:\t\t" << imie << endl
             << "Bazwisko:\t" << nazwisko
             << "\n-----------------------------\n";
    }
};

int main()
{
    // statycznie
    osoba ktos;
    ktos.imie = "Jan";
    ktos.nazwisko = "Kowalski";
    ktos.wizytowka();
    // dynamicznie
    //  osoba *wsk_na_osobe;
    //  wsk_na_osobe = new osoba;
    osoba *wsk_na_osobe = new osoba;
    wsk_na_osobe->imie = "aaaaa";
    wsk_na_osobe->nazwisko = "AAAAAAAA";
    wsk_na_osobe->wizytowka();
    delete wsk_na_osobe;
    return 0;
}