#include <iostream>
using namespace std;
int main()
{
    float N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    //N - исходная стоимость товара
    //Если N > A - X: 115 110 5 -> 115-100; x-5 ->
    // -> x = 115*5/100 
    //Если N > B - Y
    if (A < B)
    {
        if (N > A)
            cout << N-(N*X)/100;
        else if (N > B)
            cout << N-(N*Y)/100;
        else
            cout << N;
    }

    return 0;
}