#include <iostream>
#include <cmath>

using namespace std; // DOKONCZYC!!!

class liczba
{
private:
    double x;

public:
    liczba(int x) { this->x = x; }
    double wypisz() { return x; }
    double wypisz(int m)
    {
        double wynik = x;
        wynik = wynik * m;
        wynik = round(wynik);
        wynik = wynik / m;
    }
};

int main()
{

    return 0;
}