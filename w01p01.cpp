#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int *tab[100];
    for (int i = 0; i < 100; i++)
    {
        tab[i] = new int;
        *tab[i] = rand() % 10;
    }

    for (int i = 0; i < 100; i++)
        cout << *tab[i] << " ";
    return 0;
}