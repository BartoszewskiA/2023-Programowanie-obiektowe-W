#include <iostream>

using namespace std;

class stale_fizyczne
{
public:
    static double PI;
    static double E;
};
double stale_fizyczne::PI = 3.1425;
double stale_fizyczne::E = 2.71828;

int main()
{
    cout << stale_fizyczne::PI;
    return 0;
}