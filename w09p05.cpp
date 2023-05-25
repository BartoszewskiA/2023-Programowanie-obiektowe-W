#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class wektor
{
private:
    double x;
    double y;

public:
    wektor() : x(0), y(0) {}
    wektor(double px, double py) : x(px), y(py) {}
    string toString()
    {
        stringstream s;
        s << "[" << x << ";" << y << "]";
        return s.str();
    }
    ~wektor() {}
    wektor operator+(wektor w2)
    {
        wektor wynik(this->x + w2.x, this->y + w2.y);
        return wynik;
    }
    wektor operator*(double m)
    {
        wektor wynik(m * x, m * y);
        return wynik;
    }
    friend wektor operator*(double m, wektor w); // pierwszym parametrem nie jest obiekt
    // friend bool operator==(wektor w1, wektor w2);
    bool operator==(wektor w2)
    {
        if (x == w2.x && y == w2.y)
            return true;
        else
            return false;
    }
    bool operator>(wektor w2)
    {
        double dl_w1 = sqrt(x * x + y * y);
        double dl_w2 = sqrt(w2.x * w2.x + w2.y * w2.y);
        if (dl_w1 > dl_w2)
            return true;
        else
            return false;
    }
};

// bool operator==(wektor w1, wektor w2)
// {
//     if (w1.x == w2.x && w1.y == w2.y)
//         return true;
//     else
//         return false;
// }

wektor operator*(double m, wektor w)
{
    wektor wynik(m * w.x, m * w.y);
    return wynik;
}
int main()
{
    return 0;
}