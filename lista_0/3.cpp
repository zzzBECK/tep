#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    double pi = 3.14159, r;

    cin >> r;

    cout.precision(4);

    cout << fixed;

    cout << "A=" << pi * r * r  << '\n';

    return 0;
}
