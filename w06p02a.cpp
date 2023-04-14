#include <iostream>

using namespace std;

class Bazowa
{
private:
    int x;

public:
    Bazowa(int X) : x(X)
    {
        cout << "Zadziala konstruktor klasy Bazowa\n";
    }
    int getX() { return x; }
    ~Bazowa()
    {
        cout << "Zadziala destruktor klasy Bazowa\n";
    }
};

class Pochodna : public Bazowa
{
private:
    int y;

public:
    Pochodna(int X, int Y) : Bazowa(X), y(Y)
    {
        cout << "Zadziala konstruktor klasy Pochodna\n";
    }
    int getY() { return y; }
    ~Pochodna()
    {
        cout << "Zadziala destruktor klasy Pochodna\n";
    }
};

int main()
{
    Pochodna p1(101, 202);
    cout << "x=" << p1.getX() << " y=" << p1.getY() << endl;
    return 0;
}