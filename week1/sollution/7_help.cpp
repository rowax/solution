#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count1{}, count2{};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'f')
        {
            count2++;
            continue;
        }
    }
    if (count1 > 0)
        cout << 3;
    else if (count2 == 1)
        cout << -1;
    else if (count2 == 0)
        cout << -2;
    return 0;
}