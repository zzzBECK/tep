#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int diameter, a, b, c;

    cin >> diameter >> a >> b >> c;

    cout << ((diameter > a || diameter > b || diameter > c) ? 'N' : 'S') << '\n';

    return 0;
}
