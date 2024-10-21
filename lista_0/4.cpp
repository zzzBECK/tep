#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    double pi = 3.14159, r;

    cin >> r;

    cout.precision(3);

    cout << fixed;

    cout << "VOLUME = " << (4.0 / 3) * pi * r * r * r << '\n';

    return 0;
}
