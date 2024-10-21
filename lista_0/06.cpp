#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

   double a, b, c;

    cin >> a >> b >> c;

    cout.precision(3);
    cout << fixed;

    cout << "TRIANGULO: " << (a * c) / 2 << '\n';
    cout << "CIRCULO: " << 3.14159 * c * c << '\n';
    cout << "TRAPEZIO: " << ((a + b) * c) / 2 << '\n';
    cout << "QUADRADO: " << b * b << '\n';
    cout << "RETANGULO: " << a * b << '\n';

    return 0;
}
