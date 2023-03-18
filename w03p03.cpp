#include <iostream>
#include <ctime>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba(int px) { x = px; }
    void setX(int px) { x = px; }
    int getX() { return x; }
};

int main()
{
    liczba x1(10);
    // x1.setX(10);
    cout << x1.getX();
    return 0;
}