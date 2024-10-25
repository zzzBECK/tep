#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> num_list;

    for (int i = 0; i < 3; i++)
    {
        int value;
        cin >> value;
        num_list.push_back(value);
    }

    sort(num_list.begin(), num_list.end());

    for (int i = 0; i < num_list.size(); i++)
    {
        cout << num_list[i] << "\n";
    }

    cout << '\n';

    sort(num_list.begin(), num_list.end(), greater<int>());

    for (int i = 0; i < num_list.size(); i++)
    {
        cout << num_list[i] << "\n";
    }

    return 0;
}
