#include <iostream>

using namespace std;

class klasaA
{

private:
    int x;

public:
    klasaA(int X) : x(X)
    {
        cout << "konstruktor  x=" << x << endl;
    }
    int getX() { return x; } // kazdy obiekt ma swoją kopie
    friend void odczytajX(klasaA &obiekt);
    friend void zwiekszX(klasaA &obiekt);
    ~klasaA()
    {
        cout << "destruktor  x=" << x << endl;
    }
};

void odczytajX(klasaA &obiekt) // nie jest powiazan z obiektem
{
    cout << obiekt.x << endl;
}

void zwiekszX(klasaA &obiekt)
{
    obiekt.x++;
}

int main()
{
    klasaA obiekt01(101);
    odczytajX(obiekt01);
    zwiekszX(obiekt01);
    return 0;
}