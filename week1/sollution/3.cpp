#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //  Ax² + Bx + C = 0
    int a, b, c, D;
    cin >> a >> b >> c;
    D = b*b - 4*a*c;
    if (D > 0)
    {
        cout  << (-b + sqrt(D))/(2*a) << " ";
        cout  << (-b - sqrt(D))/(2*a);
    }
    else if (D == 0)
        cout << -b/(2*a);
    else
        cout << " ";
    return 0;
}