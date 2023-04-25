#include <iostream>

using namespace std;

class test
{
private:
    int x;

public:
    test(int X) : x(X) {}
    int getX() { return x; }
    static int dana_wspolna; // deklaracja pola statycznego
};

int test::dana_wspolna = 10;

int main()
{
    test obiekt01(101);
    test * obiekt02 = new test(201);
    // obiekt02.dana_wspolna = 111;
    test::dana_wspolna = 222;
    cout << "Obiekt 1: " << obiekt01.dana_wspolna << " " << obiekt01.getX() << endl;
    cout << "Obiekt 2: " << obiekt02->dana_wspolna << " " << obiekt02->getX() << endl;
    return 0;
}