#include <iostream>
#include <cmath>

using namespace std; // DOKONCZYC!!!

class liczba
{
private:
    double x;

public:
    liczba() { x = 3.14; }
    liczba(double x = 3.14) { this->x = x; }
    double wypisz() { return x; }
    double wypisz(int m)
    {
        double wynik = x;
        long mnoznik = 1;
        for (int i = 0; i < m; i++)
            mnoznik *= 10;
        wynik = wynik * mnoznik;
        wynik = round(wynik);
        wynik = wynik / mnoznik;
        return wynik;
    }
};

int main()
{
    liczba x1;
    // liczba *x1 = new liczba(10.234);
    cout << x1.wypisz(3);
    // delete x1;
    return 0;
}