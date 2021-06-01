#include <iostream>
using namespace std;

bool isPalindrom(string s)
{
    string s1;
    for (int i = 0; i < s.size()/2; i++)
    {
        s1 += s[i];
        cout << s1 << endl;
    }
    string s2;
    for (int i = s.size(); i > s.size()/2; i--)
    {
        s2 += s[i];
        cout << s2 << endl;
    }
    if (s2 == s1)
        return true;
    else 
        return false;
}


int main()
{
    string pal;
    cin >> pal;
    cout << isPalindrom(pal);
    return 0;
}