#include <iostream>

using namespace std;
class Bazowa
{
protected:
    int x;

public:
    void setX(int x) { this->x = x; }
    int getX() { return x; }
    void przedstawSie()
    {
        cout << "\nx=" << x;
    }
};

class Pochodna : public Bazowa
{
protected:
    int y;

public:
    void setY(int y) { this->y = y; }
    int getY() { return y; }
    void przedstawSie()
    {
        Bazowa::przedstawSie();
        cout << "\ny=" << y;
    }
};

int main()
{
    Pochodna x1;
    // x1.setX(102);
    // x1.setY(201);
    x1.przedstawSie();
    // cout << "x=" << x1.getX() << " y=" << x1.getY();

    return 0;
}