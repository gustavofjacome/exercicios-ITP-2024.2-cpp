#include <iostream>
using namespace std;

int fatorial_duplo(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fatorial_duplo(n - 2);
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "Fatorial duplo de " << num << " é: " << fatorial_duplo(num) << endl;
    return 0;
}


// calcula o fatorial duplo de um numero