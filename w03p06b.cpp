#include <iostream>

using namespace std;

int wiek = 21;

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    bool czyPelnoletni()
    {
        if (this->wiek >= ::wiek)
            return true;
        else
            return false;
    }
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
};

int main()
{
    osoba ktos("Jan", "Kowalski", 30);
    return 0;
}