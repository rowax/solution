#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if (A <= 1000000 && B < 1000000)
    {
        if (B == 0)
            cout << "Impossible";
        else
            cout << A/B;
    }
    return 0;
}