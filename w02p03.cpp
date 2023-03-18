#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int rok_urodzenie;

public:
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    void setWiek(int wiek);
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek();

    void wizytowka(); // nagłowek metody
};

void osoba::setWiek(int wiek)
{
    time_t czas_systemowy = time(NULL);
    tm *czas = localtime(&czas_systemowy);
    rok_urodzenie = (1900 + czas->tm_year) - wiek;
}

int osoba::getWiek()
{
    time_t czas_systemowy = time(NULL);
    tm *czas = localtime(&czas_systemowy);
    return (1900 + czas->tm_year) - rok_urodzenie;
}

void osoba::wizytowka()
{
    cout << "\n-----------------------------\n"
         << "Imie:\t\t" << imie << endl
         << "Bazwisko:\t" << nazwisko << endl
         << "Rok urodzenia:\t" << rok_urodzenie << endl
         << "Wiek:\t\t" << getWiek()
         << "\n-----------------------------\n";
}

int main()
{
    osoba *ktos = new osoba;
    ktos->setImie("aaaaa");
    ktos->setNazwisko("AAAAAAAA");
    ktos->setWiek(30);
    ktos->wizytowka();
    delete ktos;
    return 0;
}