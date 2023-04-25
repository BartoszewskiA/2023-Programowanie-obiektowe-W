#include <iostream>

using namespace std;

class klasaA
{

private:
    int x;

public:
    klasaA(int X) : x(X) {}
    int getX() { return x; } // kazdy obiekt ma swoją kopie
    friend void odczytajX(klasaA obiekt);
};

void odczytajX(klasaA obiekt) // nie jest powiazan z obiektem
{
    cout << obiekt.x;
}

int main()
{
    klasaA obiekt01(101), obiekt02(202);
    // obiekt01.odczytajX(); błąd - odczytajX() nie jest metoda klasy
    odczytajX(obiekt01);
    return 0;
}