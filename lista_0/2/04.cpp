#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double value;

    cin >> value;

    if (value < 0.0 || value > 100.0)
    {
        cout << "Fora de intervalo\n";
    }
    else if (value <= 25.0)
    {
        cout << "Intervalo [0,25]\n";
    }
    else if (value <= 50.0)
    {
        cout << "Intervalo (25,50]\n";
    }
    else if (value <= 75.0)
    {
        cout << "Intervalo (50,75]\n";
    }
    else
    {
        cout << "Intervalo (75,100]\n";
    }

    return 0;
}
