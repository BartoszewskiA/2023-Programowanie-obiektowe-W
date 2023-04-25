#include <iostream>

using namespace std;

class klasaA
{
private:
    int x;

public:
    klasaA(int X) : x(X) {}
    friend void porownaj(klasaA &ob01, klasaA &ob02);
};

void porownaj(klasaA &ob01, klasaA &ob02)
{
    if (ob01.x > ob02.x)
        cout << "x1>x2";
    else if (ob01.x == ob02.x)
        cout << "x1=x2";
    else
        cout << "x1<x2";
}

int main()
{
    klasaA obiekt01(101), obiekt02(202);
    porownaj(obiekt01,obiekt02);
    return 0;
}