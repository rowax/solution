#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> Reverse(const vector<int>& v)
{
    vector<int> result;
    for (int i = v.size()-1; i >= 0; i--)
    {   
        result.push_back(v[i]);
    }
    for(auto r : result)
    {
        cout << r << " ";
    }
}

int main()
{
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    return 0;
}