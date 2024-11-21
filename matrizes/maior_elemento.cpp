/*
Maior Elemento de uma Linha/Coluna

Faça um programa que, dados os números n, m (n,m <=30), lê do usuário os valores de uma matriz A de inteiros de dimensão n x m. Depois, o usuário vai digitar um caractere ch e um inteiro x. Caso ch seja igual 'l', o seu programa deve imprimir o maior elemento na linha x de A. Caso ch seja igual a 'c', o seu programa deve imprimir o maior elemento na coluna x de A.
*/

#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int A[30][30];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> A[i][j];

  char ch;
  int x;
  cin >> ch >> x;

  if (ch == 'l')
  {
    int maior = A[x][0];
    for (int j = 1; j < m; j++)
    {
      if (A[x][j] > maior)
        maior = A[x][j];
    }
    cout << maior << endl;
  }
  else if (ch == 'c')
  {
    int maior = A[0][x];
    for (int i = 1; i < n; i++)
    {
      if (A[i][x] > maior)
        maior = A[i][x];
    }
    cout << maior << endl;
  }

  return 0;
}
