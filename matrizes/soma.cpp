/*
Soma de matrizes

Escreva um programa para somar duas matrizes A e B. A primeira linha da entrada de seu programa é constituída de dois valores inteiros, correspondentes respectivamente ao número de linhas L e número de colunas C das matrizes. As L linhas seguintes definem as linhas das matrizes A, contendo, cada uma C valores inteiros. Em seguida, haverá as L linhas da matriz B, cada uma contendo também C valores inteiros. A saída do programa deve ser a matriz L x C resultante da soma de A e B.

Obs: L e C são menores ou igual a 20.
*/

#include <iostream>
using namespace std;

int main()
{

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