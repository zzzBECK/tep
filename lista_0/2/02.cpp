#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    cin >> x >> y;

    if (y > x)
        swap(x, y);

    cout << (x % y == 0 ? "Sao Multiplos" : "Nao sao Multiplos") << '\n';

    return 0;
}
