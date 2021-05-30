#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    while (A <= B && A>=1 && B <= 30000)
    {
        if (A % 2 == 0)
            cout << A << " ";
        A++;
    }
    return 0;
}