/*
Matriz Simétrica

Insira uma matriz de tamanho qualquer e verifique se a mesma é simétrica. A simetria da matriz é quando sua transposta é igual a ela mesma, no link vai te ajudar a ter mais informações.

Entre com o numero de linhas e colunas da matriz, e entre com a matriz e verifique a simetria.
*/

#include <iostream>
using namespace std;

int main()
{

  int n, m;
  cin >> n >> m;

  int matriz1[n][m];
  bool ehSimetrica = true;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matriz1[i][j];
    }
  }

  if (n != m)
  {
    ehSimetrica = false;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (matriz1[i][j] != matriz1[j][i])
        {
          ehSimetrica = false;
          break;
        }
      }
      if (!ehSimetrica)
      {
        break;
      }
    }

    if (ehSimetrica)
      cout << "Matriz Simétrica" << endl;
    else
      cout << "Matriz não Simétrica" << endl;
  }

  return 0;
}
