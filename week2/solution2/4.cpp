#include <iostream>
#include <vector>
#include <string>
using namespace std;

void UpdateIfGreater(int& x, int& y)
{
    if (x > y)
    {
        y = x;
    }
}

int main()
{
    int first = 4;
    int second = 2;
    UpdateIfGreater(first, second);
    cout << second;
    return 0;
}