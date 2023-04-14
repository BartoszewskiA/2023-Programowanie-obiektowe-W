#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;

public:
    Osoba() : imie("NN"), nazwisko("NN") {}
    Osoba(string IMIE, string NAZWISKO) : imie(IMIE), nazwisko(NAZWISKO) {}
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
};

void RODO(Osoba &kto) // funkcja programu - nie jest czescia klasy
{
    string s = kto.getNazwisko();
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = '*';
    }
    kto.setNazwisko(s);
    cout << "Imie:" << kto.getImie()
         << "\nNazwisko:" << kto.getNazwisko() << endl;
}

int main()
{
    Osoba ktos("Jan", "Kowalski");
    RODO(ktos);
    cout << "Imie:" << ktos.getImie()
         << "\nNazwisko:" << ktos.getNazwisko();
    return 0;
}