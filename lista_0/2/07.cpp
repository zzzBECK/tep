#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> num_list, sorted_list;

    for (int i = 0; i < 3; i++)
    {
        int value;
        cin >> value;
        num_list.push_back(value);
    }

    sorted_list = num_list;

    sort(sorted_list.begin(), sorted_list.end());

    for (int i = 0; i < sorted_list.size(); i++)
    {
        cout << sorted_list[i] << "\n";
    }

    cout << '\n';

    for (int i = 0; i < num_list.size(); i++)
    {
        cout << num_list[i] << "\n";
    }

    return 0;
}
