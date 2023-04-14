#include <iostream>

using namespace std;

class Bazowa
{
private:
public:
    Bazowa()
    {
        cout << "Zadziala konstruktor klasy Bazowa\n";
    }
};

class Pochodna : public Bazowa
{
public:
    Pochodna() : Bazowa()
    {
        cout << "Zadziala konstruktor klasy Pochodna\n";
    }
};

int main()
{
    Pochodna p1;
    return 0;
}