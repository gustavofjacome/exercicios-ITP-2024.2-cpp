#include <iostream>
using namespace std;

void imprime_inteiros(int inicio, int fim)
{
  cout << inicio << " ";
  if (inicio < fim)
  {
    imprime_inteiros(inicio + 1, fim);
  }
}

void preencha_array(int inicio, int fim, int n, int array[]) {
  if (inicio <= fim) {
  array[n-1] = fim;
  preencha_array (inicio,fim-1, n-1, array);
}

}