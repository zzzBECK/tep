#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int time, avg_speed;

    cin >> time >> avg_speed;

    cout.precision(3);
    cout << fixed;

    cout << (time * avg_speed) / 12.0 << '\n';

    return 0;
}
