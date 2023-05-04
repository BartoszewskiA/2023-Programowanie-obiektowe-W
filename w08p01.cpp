#include <iostream>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int px) : x(px) {}
    Liczba(const Liczba &wzorzec)
    {
        x =wzorzec.x;
    }
    int getX() { return x; }

};

int main()
{
    Liczba x1(202);
    Liczba x2 = x1;
    cout << x2.getX();
    return 0;
}