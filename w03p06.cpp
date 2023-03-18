#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    osoba(string im, string nazw, int wi)
    {
        imie = im;
        nazwisko = nazw;
        wiek = wi;
    }
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    void setWiek(int wi) { wiek = wi; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek() { return wiek; }

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
    osoba ktos("Jan", "Kowalski", 30);
    return 0;
}