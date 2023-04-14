#include <iostream>

using namespace std;
class Bazowa
{
private:
    int x;

public:
    void setX(int x) { this->x = x; }
    int getX() { return x; }
};

class Pochodna : public Bazowa
{
private:
    int y;

public:
    void setY(int y) { this->y = y; }
    int getY() { return y; }
    int odstepXY()
    {
        return y - getX();
    }
};

int main()
{
    Pochodna x1;
    x1.setX(102);
    x1.setY(201);
    cout << "x=" << x1.getX() << " y=" << x1.getY();
    return 0;
}