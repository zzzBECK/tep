#include <iostream>
#include <cmath>
using namespace std;

double getDistance(double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(int argc, char const *argv[])
{

    double x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double distance = (getDistance(x1, x2, y1, y2));

    cout.precision(4);
    cout << fixed;

    cout << distance << '\n';

    return 0;
}
