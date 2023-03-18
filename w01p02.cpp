#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
};

int main()
{
    // statycznie
    osoba ktos;
    ktos.imie = "Jan";
    ktos.nazwisko = "Kowalski";
    // dynamicznie
    osoba *ktos_01 = new osoba;
    ktos_01->imie = "Adam";
    ktos_01->nazwisko = "Nowak";

    delete ktos_01;
    return 0;
}