#include <iostream>
#include <sstream>

using namespace std;

class wektor
{
private:
    double x;
    double y;

public:
    wektor(double px, double py) : x(px), y(py) {}
    string toString()
    {
        stringstream s;
        s << "[" << x << ";" << y << "] ";
        return s.str();
    }
    friend wektor dodaj(wektor &w1, wektor &w2);
    friend wektor *dodaj_2(wektor &w1, wektor &w2);
};

wektor dodaj(wektor &w1, wektor &w2)
{
    double wx = w1.x + w2.x;
    double wy = w1.y + w2.y;
    wektor wynik(wx, wy);
    return wynik;
}

wektor *dodaj_2(wektor &w1, wektor &w2)
{
    double wx = w1.x + w2.x;
    double wy = w1.y + w2.y;
    wektor *wynik = new wektor(wx, wy);
    return wynik;
}

int main()
{
    wektor w1(10, 40), w2(-5, 20);
    cout << dodaj(w1, w2).toString();
    // wektor wynik = dodaj(w1, w2);
    // cout << wynik.toString();

    wektor *wynik = dodaj_2(w1, w2);
    cout << wynik->toString();
    delete wynik;
    return 0;
}