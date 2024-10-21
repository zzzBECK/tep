#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int time;
    int hours, minutes, seconds;

    cin >> time;

    hours = time / (60 * 60), time %= (60 * 60);
    minutes = time / 60, time %= 60;
    seconds = time;

    cout << hours << ':' << minutes << ':' << seconds << '\n';

    return 0;
}
