#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    string s;
    cin >> s;
    int count{}, f;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'f')
            count++;
            if (count == 2)
            {
                cout << 3;
                break;
            }
        
    }
    if (count == 1)
        cout << -1;
    else if (count == 0)
        cout << -2;

}