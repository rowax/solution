#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b; // 2 10
    while (a > 0 && b > 0) //2 > 0, 10 > 0
    {
        if (a > b) // 2 > 10?
            a = a % b;
        else
            b = b % a;
            
    }
    cout << a + b;
    return 0;
}