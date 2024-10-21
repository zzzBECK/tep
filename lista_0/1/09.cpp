#include <iostream>
#include <stdlib.h>
using namespace std;

int isBigger(int x, int y)
{
    return (x + y + abs(x - y)) / 2;
}

int main(int argc, char const *argv[])
{

    int x, y, z;

    cin >> x >> y >> z;

    int first_value = (isBigger(x, y));

    cout << isBigger(first_value, z) << " eh o maior\n";

    return 0;
}
