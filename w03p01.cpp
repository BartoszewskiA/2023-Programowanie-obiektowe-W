#include <iostream>

using namespace std;

class klasa
{
public:
    klasa()
    {
        cout << "Utworzono obiekt klasy \"klasa\"\n";
    }

    ~klasa()
    {
        cout << "Usunieto obiekt klasy \"klasa\"\n";
    }
};

int main()
{
    // klasa obiekt;
    klasa * obiekt = new klasa;
    delete obiekt;
    return 0;
}