#include <iostream>
#include <sstream>

using namespace std;

class wektor
{
private:
    double x;
    double y;

public:
    wektor() : x(0), y(0) {}
    wektor(double px, double py) : x(px), y(py) { cout << "konstruktor\n"; }
    string toString()
    {
        stringstream s;
        s << "[" << x << ";" << y << "]";
        return s.str();
    }
    ~wektor() { cout << "destruktor\n"; }
    friend wektor operator+(wektor &w1, wektor &w2);
    friend wektor operator-(wektor w1, wektor w2);
    friend wektor operator*(double m, wektor w);
    friend wektor operator*(wektor w, double m);
    friend void operator+=(wektor &l, wektor p);
    friend void operator-=(wektor &l, wektor p);
    friend void operator*=(wektor &l, wektor p);
};

wektor operator+(wektor &w1, wektor &w2)
{
    wektor wynik(w1.x + w2.x, w1.y + w2.y);
    return wynik;
}

wektor operator-(wektor w1, wektor w2)
{
    wektor wynik(w1.x - w2.x, w1.y - w2.y);
    return wynik;
}

wektor operator*(double m, wektor w)
{
    wektor wynik(m * w.x, m * w.y);
    return wynik;
}

wektor operator*(wektor w, double m)
{
    wektor wynik(m * w.x, m * w.y);
    return wynik;
}

void operator+=(wektor &l, wektor p)
{
    double x = l.x + p.x;
    double y = l.y + p.y;
    l.x;
    l.y;
}

int main()
{

    wektor a(20, 30), b(30, -5);

    wektor wynik = a + b;

    // a += b;

    cout << wynik.toString() << endl;

    return 0;
}