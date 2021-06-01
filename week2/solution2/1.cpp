#include <iostream>
using namespace std;

// int Factorial(int n)
// {
//     int result = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         result *= i;
//     }
//     return result;
// }

int Factorial(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n*Factorial(n-1);
}

int main()
{
    cout << Factorial(5);
    return 0;
}