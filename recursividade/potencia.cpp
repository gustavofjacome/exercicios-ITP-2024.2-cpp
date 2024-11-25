#include <iostream>
using namespace std;


double potencia(double b, int n) {
    if (n == 0) // caso base
    return 1;
    
    return b * potencia(b, n - 1);
}

double calcula(double b, int n) {
    return potencia(b, n) * potencia(b, n - 1);
}

int main() {
    double b;
    int n;

    cout << "base (b): ";
    cin >> b;
    cout << "Expoente (n): ";
    cin >> n;
    cout << "Resultado: " << calcula(b, n) << endl;

    return 0;
}