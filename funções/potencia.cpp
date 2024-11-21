/*
Escreva uma função que recebe dois parâmetros, um float B e outro inteiro não
negativo P e retorna a potência B^p

float power(float, int);
*/

#include <iostream>
using namespace std;


float power(float b, int p) {
    float resultado = 1;
    

    for (int i = 0; i < p; i++) {
        resultado *= b;
    }
    
    return resultado;
}

int main() {
    
    float base;
    int expoente;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;

    
    if (expoente < 0) {
        cout << "Erro: o expoente deve ser um inteiro não negativo." << endl;
        return 1;
    }

    cout << "Resultado: " << power(base, expoente) << endl;

    return 0;
}

