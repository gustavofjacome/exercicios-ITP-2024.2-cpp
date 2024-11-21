/*
Matriz de permutação (0/1)

​Uma matriz quadrada é chamada matriz de permutação se seus elementos são apenas 0’s e 1’s e se em cada linha e coluna da matriz existe um único valor 1.  Escreva um programa que verifica se uma dada matriz quadrada é de permutação ou não.

A primeira linha da entrada deve ser um único valor inteiro N com o tamanho da matriz quadrada. Em seguida, as N linhas seguintes conterão N valores inteiros, correspondentes aos valores da matriz. Seu programa deve enviar para a saída padrão 0, se a matriz não for matriz de permutação, ou 1, se for.

Obs: N será sempre menor ou igual a 20.
*/

#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int A[20][20];
  bool ehPermutacao = true;

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      cin >> A[i][j];

  for (int i = 0; i < N; i++)
  {
    int contaLinha = 0;
    int contaColuna = 0;
    for (int j = 0; j < N; j++)
    {
      contaLinha += A[i][j];
      contaColuna += A[j][i];
    }
    if (contaLinha != 1 || contaColuna != 1)
    {
      ehPermutacao = false;
      break;
    }
  }

  cout << (ehPermutacao ? 1 : 0) << endl;
  return 0;
}
