#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double value, tax = 0, taxes[4] = {0.0, 0.08, 0.18, 0.28}, ranges[4] = {2000.0, 1000.0, 1500.0, 0.0};

    cin >> value;

    cout.precision(2);
    cout << fixed;

    if (value <= 2000.0)
    {
        cout << "Isento\n";
    }
    else
    {
        for (int i = 0; i <= 3; i++)
        {
            if (value > 0)
            {
                if (value < ranges[i] || i == 3)
                {
                    ranges[i] = value;
                }

                tax += ranges[i] * taxes[i];
                value -= ranges[i];
            }
        }

        cout << "R$ " << tax << '\n';
    }

    return 0;
}