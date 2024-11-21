# Exercício: Soma de Matrizes  

## Enunciado  
![Enunciado - Soma de Matrizes](C:/Users/gusta/Documents/GitHub/exercicios-ITP-2024.2-cpp/matrizes/soma_matriz.png)  

## Solução em C++  
```cpp
#include <iostream>
using namespace std;

int main () {

    int n, m;
    cin >> n >> m;
    int matriz1[n][m];
    int matriz2[n][m];
    int somaMatriz[n][m];

    // ler valores da matriz1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriz1[i][j];
        }
    }

    // ler valores da matriz2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriz2[i][j];
        }
    }

    // soma as duas
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            somaMatriz[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    // imprime
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << somaMatriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
