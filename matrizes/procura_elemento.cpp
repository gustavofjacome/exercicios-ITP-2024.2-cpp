#include <iostream>
using namespace std;
/*
Enunciado:
Faça um programa que, dados os números n, m (n,m <=30), lê do usuário os valores de uma matriz A de inteiros de dimensão n x m. Depois, o programa deve ler um número x e imprimir uma mensagem indicando se a matriz possui algum elemento cujo valor é x.
*/

int main()
{

  int n, m, x;
  cin >> n >> m;
  int matrizA[30][30];
  bool estarOuNaoEstar = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrizA[i][j];
    }
  }

  cin >> x;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (matrizA[i][j] == x)
      {
        estarOuNaoEstar = true;
        break;
      }
    }
    if (estarOuNaoEstar)
    {
      break;
    }
  }

  if (estarOuNaoEstar)
  {
    cout << "Matriz tem elemento " << x << endl;
  }
  else
    cout << "Matriz não tem elemento " << x << endl;

  return 0;
}