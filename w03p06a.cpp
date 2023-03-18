#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    osoba(string imie, string nazwisko, int wiek)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->wiek = wiek;
    }
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazisko) { this->nazwisko = nazwisko; }
    void setWiek(int wiek) { this->wiek = wiek; }

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