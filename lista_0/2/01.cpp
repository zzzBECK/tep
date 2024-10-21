#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int productId, qtd;

    cin >> productId >> qtd;

    map<int, double> menu = {
        {1, 4.00}, // Cachorro Quente
        {2, 4.50}, // X-Salada
        {3, 5.00}, // X-Bacon
        {4, 2.00}, // Torrada simples
        {5, 1.50}  // Refrigerante
    };

    cout.precision(2);
    cout << fixed;

    cout << "Total: R$ " << menu[productId] * qtd << '\n';

    return 0;
}
