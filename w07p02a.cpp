#include <iostream>

using namespace std;

class stale_fizyczne
{
private:
    static double PI;
    static double E;

public:
    static double getPI() { return PI; }
    static double getE() { return E; }
};
double stale_fizyczne::PI = 3.1425;
double stale_fizyczne::E = 2.71828;

int main()
{
    // stale_fizyczne::PI = 3; - operacja niedozwolona
    cout << stale_fizyczne::getE();
    return 0;
}