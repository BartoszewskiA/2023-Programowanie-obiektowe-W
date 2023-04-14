#include <iostream>
#include <sstream>

using namespace std;
int ile = 0;

class Osoba
{
protected:
    int id;
    string imie;
    string nazwisko;

public:
    Osoba(string IMIE, string NAZWISKO) : imie(IMIE), nazwisko(NAZWISKO)
    {
        id = ++ile;
    }
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    string info()
    {
        stringstream s;
        s << "ID:\t\t" << id << endl
          << "Imie:\t\t" << imie << endl
          << "Nazwisko:\t" << nazwisko << endl;
        return s.str();
    }
};
// ------------------------------------------------------------------- //

class Pracownik : public Osoba
{
protected:
    string wydzial;
    string stanowisko;

public:
    Pracownik(string IMIE, string NAZWISKO, string WYDZIAL = "IT", string STANOWISKO = "Mlodszy specjalista")
        : Osoba(IMIE, NAZWISKO), wydzial(WYDZIAL), stanowisko(STANOWISKO) {}
    string info()
    {
        stringstream s;
        s << Osoba::info()
          << "Wydzial:\t" << wydzial << endl
          << "Stanowisko:\t" << stanowisko << endl;
        return s.str();
    }
    void setWydzial(string wydzial) { this->wydzial = wydzial; }
    void setStanowisko(string stanowisko) { this->stanowisko = stanowisko; }
    string getWydzial() { return wydzial; }
    string getStanowisko() { return stanowisko; }
};

//-------------------------------------------------------------------------//

// ------------------------------------------------------------------- //

class Kierownik: public Osoba
{
protected:
    string wydzial;
    string pion;

public:
    Kierownik(string IMIE, string NAZWISKO, string WYDZIAL = "Infrastruktura sieciowa", string PION = "IT")
        : Osoba(IMIE, NAZWISKO), wydzial(WYDZIAL), pion(PION) {}
    string info()
    {
        stringstream s;
        s << Osoba::info()
          << "Wydzial:\t" << wydzial << endl
          << "Pion:\t\t" << pion << endl;
        return s.str();
    }
    void setWydzial(string wydzial) { this->wydzial = wydzial; }
    void setPion(string pion) { this->pion = pion; }
    string getWydzial() { return wydzial; }
    string getPion() { return pion; }
};

//-------------------------------------------------------------------------//

int main()
{
    Kierownik ktos("jan", "kowlski");
    cout << ktos.info();
    return 0;
}