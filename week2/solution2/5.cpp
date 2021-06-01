#include <iostream>
#include <string>
#include <vector>
using namespace std;

void MoveString(vector<string>& v1, vector<string>& v2)
{
    for(auto v: v1)
    {
        v2.push_back(v);
    }
    v1.clear();
}

int main()
{
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveString(source,destination);
    for (auto v: destination)
    {
        cout << v << endl;
    }
    return 0;
}