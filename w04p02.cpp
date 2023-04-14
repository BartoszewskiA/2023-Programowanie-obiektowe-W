#include <iostream>

using namespace std;

class Test
{
private:
    const int x;
    char c;
    string napis;

public:
    // Test()
    // {
    //     x = 10;
    //     c = '_';
    //     napis = "aaaaa";
    // }
    Test() : x(10), c('_'), napis("aaaaa") {}
    Test(int px, char pc, string s) : x(px), c(pc), napis(s) {}
    // Test(int px=0, char pc='_', string s="aaaa") : x(px), c(pc), napis(s) {}
};

int main()
{
    Test test01(12, 'q', "Ala ma kota");
    return 0;
}