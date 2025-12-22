
// 004 - Verificar se o número é par ou ímpar

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Numero par";
    } else {
        cout << "Numero impar";
    }

    return 0;
}
