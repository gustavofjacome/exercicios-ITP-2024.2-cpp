#include <iostream>
using namespace std;

int contar_ocorrencias(int numero, int n) {
    if (numero == 0) {
        return 0;
    }
    return (numero % 10 == n ? 1 : 0) + contar_ocorrencias(numero / 10, n);
}

int main() {
    int numero, n;
    cout << "Digite um número: ";
    cin >> numero;
    cout << "Digite o dígito a ser contado: ";
    cin >> n;
    int resultado = contar_ocorrencias(numero, n);
    cout << "O dígito " << n << " apareceu " << resultado << " vezes no número " << numero << "." << endl;
    return 0;
}


// ver quantas vezes um numero apareceu em outro ex: 555 => 5 apareceu três vezes...