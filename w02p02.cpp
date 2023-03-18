#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }

    void wizytowka(); // nagłowek metody
};

void osoba::wizytowka()
{
    cout << "\n-----------------------------\n"
         << "Imie:\t\t" << imie << endl
         << "Bazwisko:\t" << nazwisko
         << "\n-----------------------------\n";
}

int main()
{
    osoba *ktos = new osoba;
    ktos->imie = "aaaa";
    delete ktos;
    return 0;
}