#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> input(N);
    for (int& a : input)
    {
        cin >> a;
        input.push_back(a);
    }
    // Сумма = 0
    int sum{};
    for (int i = 0; i < N; i++)
    {
        sum += input[i];
    }
    // Среднее арифметическое
    int s_a = sum/N;
    // Колличество эл-в
    int k = 0;
    vector<int> output;
    for (int i = 0; i < N; i++)
    {
        if (input[i] > s_a)
        {
            k++;
            output.push_back(input[i]);
        }
    }
    // Вывод
    cout << output.size() << endl;
    for (auto c : output)
    {
        cout << c << " ";
    }

    return 0;
}