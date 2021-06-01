#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrom(string s)
{
    string s1;
    for (int i = 0; i < s.size()/2; i++)
        s1 += s[i];
    string s2;
    for (int i = s.size(); i > s.size()/2; i--)
        s2 += s[i];
    if (s2 == s1)
        return true;
    else 
        return false;
}

vector<string> PalindromFilter(const vector<string>& str, int min_length)
{
    vector<string> r_palindorm(min_length);
        for (auto s: str)
        {
            if (s.size() <= min_length && isPalindrom(s))
            {
                r_palindorm.push_back(s);
            }
        {
    return r_palindorm;
}

int main()
{
    vector<string> test = {"madam", "aabaa", "keks"};
    vector<string> result = PalindromFilter(test, 100);
    for (auto e: result)
    {
        cout << e << " ";
    }
    return 0;
}