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
    wektor(double px, double py) : x(px), y(py) {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    string toString()
    {
        stringstream s;
        s << "[" << x << ";" << y << "]";
        return s.str();
    }
};

wektor operator+(wektor w1, wektor w2)
{
    // wektor wynik;
    // wynik.setX(w1.getX() + w2.getX());
    // wynik.setY(w1.getY() + w2.getY());
    wektor wynik(w1.getX() + w2.getX(), w1.getY() + w2.getY());
    return wynik;
}

wektor operator-(wektor w1, wektor w2)
{
    wektor wynik(w1.getX() - w2.getX(), w1.getY() - w2.getY());
    return wynik;
}

wektor operator*(double m, wektor w)
{
    wektor wynik(m * w.getX(), m * w.getY());
    return wynik;
}

wektor operator*(wektor w, double m)
{
    wektor wynik(m * w.getX(), m * w.getY());
    return wynik;
}

void operator+=(wektor &l, wektor p)
{
    double x = l.getX() + p.getX();
    double y = l.getY() + p.getY();
    l.setX(x);
    l.setY(y);
}

ostream &operator<<(ostream &strumien, wektor w)
{
    strumien << "[" << w.getX() << ";" << w.getY() << "]";
    return strumien;
}

int main()
{

    wektor a(20, 30), b(30, -5);

    wektor wynik = a + b;

    // a += b;

    cout << a << "+" << b << "=" << wynik;

    return 0;
}