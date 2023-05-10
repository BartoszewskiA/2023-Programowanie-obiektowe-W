#include <iostream>

using namespace std;

class wektor
{
public:
    double x;
    double y;
};

wektor operator+(wektor w1, wektor w2)
{
    wektor wynik;
    wynik.x = w1.x + w2.x;
    wynik.y = w1.y + w2.y;
    return wynik;
}

int main()
{

    wektor a, b;

    wektor wynik = a + b;

    
        return 0;
}