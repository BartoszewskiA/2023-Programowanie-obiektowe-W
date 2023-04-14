#include <iostream>
#include <cmath>
#include <sstream>
#include <ctime>

using namespace std;

const int ZYCIE = 100;
const int PUNKTY = 30;

struct cios
{
    int atak_fizyczny = 0;
    int atak_magiczny = 0;
    bool podstepny_atak;
};

class postac
{
private:
    string imie;
    int zycie;
    int atak_fizyczny;
    int atak_magiczny;
    int obrona_fizyczna;
    int obrona_magiczna;

    double procentGauss(int skupienie)
    {
        double wynik = 0.0;
        for (int i = 0; i < skupienie; i++)
            wynik += rand() % 100;
        wynik = wynik / skupienie; //<0; 100)
        return wynik / 100.0;      //<0;1)
    }
    double procentGauss(int minimum, int skupienie)
    {
        double wynik = 0.0;
        for (int i = 0; i < skupienie; i++)
            wynik += rand() % (100 - minimum);
        wynik = (wynik / skupienie) + minimum; //<minimum ; 100)
        return wynik / 100.0;                  //<minimum/100 ; 1)
    }

public:
    postac(string im) : imie(im), zycie(ZYCIE)
    {
        int atak, obrona;
        atak = round(PUNKTY * procentGauss(2));
        obrona = PUNKTY - atak;
        atak_fizyczny = round(atak * procentGauss(2));
        atak_magiczny = atak - atak_fizyczny;
        obrona_fizyczna = round(obrona * procentGauss(2));
        obrona_magiczna = obrona - obrona_fizyczna;
    }

    postac(string im, int af, int am, int of, int om)
        : imie(im), atak_fizyczny(af), atak_magiczny(am),
          obrona_fizyczna(of), obrona_magiczna(om), zycie(ZYCIE)
    {
    }
    string getImie() { return imie; };
    int getZycie() { return zycie; }
    bool czy_zyje()
    {
        if (zycie > 0)
            return true;
        else
            return false;
    }

    string przedstaw_sie()
    {
        stringstream s;
        s << "\n----------------------------------------\n"
          << imie << " (" << zycie << ") "
          << "\nAtak fizyczny: " << atak_fizyczny << " Atak magiczny: " << atak_magiczny
          << "\nObronafizyczna: " << obrona_fizyczna << " Obrona magiczna: " << obrona_magiczna
          << "\n----------------------------------------\n";
        return s.str();
    }

    cios zadaj_cios()
    {
        cios c;
        c.atak_fizyczny = round(atak_fizyczny * procentGauss(20, 2));
        c.atak_magiczny = round(atak_magiczny * procentGauss(20, 2));
        if (rand() % 5 == 0)
            c.podstepny_atak = true;
        else
            c.podstepny_atak = false;
        return c;
    }
    void przyjmij_cios(cios c)
    {
        int obrazenia_fizyczne = 0;
        int obrazenia_magiczne = 0;
        if (c.podstepny_atak)
        {
            obrazenia_fizyczne = c.atak_fizyczny;
            obrazenia_magiczne = c.atak_magiczny;
        }
        else
        {
            obrazenia_fizyczne = c.atak_fizyczny - round(obrona_fizyczna * procentGauss(2));
            obrazenia_magiczne = c.atak_magiczny - round(obrona_magiczna * procentGauss(2));
        }
        if (obrazenia_fizyczne < 0)
            obrazenia_fizyczne = 0;
        if (obrazenia_magiczne < 0)
            obrazenia_magiczne = 0;
        zycie = zycie - (obrazenia_fizyczne + obrazenia_magiczne);
    }
};

void ring(postac gracz1, postac gracz2)
{
    cios c;
    cout << gracz1.przedstaw_sie();
    cout << gracz2.przedstaw_sie();
    while (gracz1.czy_zyje() && gracz2.czy_zyje())
    {
        c = gracz1.zadaj_cios();
        cout << gracz1.getImie() << "(" << gracz1.getZycie() << ") "
             << c.atak_fizyczny << " " << c.atak_magiczny << endl;
        gracz2.przyjmij_cios(c);

        c = gracz2.zadaj_cios();
        cout << gracz2.getImie() << "(" << gracz2.getZycie() << ") "
             << c.atak_fizyczny << " " << c.atak_magiczny << endl;
        gracz1.przyjmij_cios(c);
    }
    cout << gracz1.getImie() << " Pozostalo zycia: " << gracz1.getZycie() << endl
         << gracz2.getImie() << " Pozostalo zycia: " << gracz2.getZycie() << endl;
}

int main()
{
    srand(time(NULL));
    postac gracz1("Conan");
    postac gracz2("Rambo");
    ring(gracz1, gracz2);
    return 0;
}