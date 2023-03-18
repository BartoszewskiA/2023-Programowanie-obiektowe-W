#include <iostream>
#include <ctime>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba(int px) { x = px; } // wartość domyślmna parametru
    void setX(int px) { x = px; }
    int getX() { return x; }
};

int main()
{
    liczba *tab[100];
    for (int i = 0; i < 100; i++)
    {
        tab[i] = new liczba(i + 1);
    }

    for (int i = 0; i < 100; i++)
        cout << tab[i]->getX() << " ";
    return 0;
}