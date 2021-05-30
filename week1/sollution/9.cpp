#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int n;
    vector<int> nums;
    while (N > 0)
    {
        n = N % 2;
        nums.push_back(n);
        N / 2;
    }
    for (int i = nums.size()-1; i >= 0; i--)
    {
        cout << nums[i];
    }
    return 0;
}


