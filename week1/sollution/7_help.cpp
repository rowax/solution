#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    string s;
    cin >> s;
    int count = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == 'f')
    //         count++;
    // }
    // if (count == 1)
    //     cout << -1;
    // else if (count == 0)
    //     cout << -2;
    // else if (count > 1)
    //     cout << 3;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'f')
           count++; 
           if (count > 1)
           {
                cout << s[i];
                break;
           }
    }
    

    

}