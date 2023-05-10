#include <iostream>

using namespace std;

class liczba
{
public:
    int x;
    liczba(int px) : x(px) {}
};

ostream &operator<<(ostream &str, liczba dana)
{
    str << dana.x;
    return str;
}

istream &operator>>(istream &str, liczba &dana)
{
    str >> dana.x;
    return str;
}

int main()
{
    liczba a(0);
    cout << "a=";
    cin >> a;
    cout << "Podales: " << a;
    return 0;
}