#include <iostream>

using namespace std;

int main()
{
    int x;
    __asm{
        mov ax,3
    }
    cout << x;
    return 0;
}