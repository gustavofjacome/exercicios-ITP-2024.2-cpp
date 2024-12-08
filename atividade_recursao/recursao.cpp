// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// QUESTÃO 1 - Dado um inteiro N, retorna o somatório dos números positivos de 1 a N

int soma_positivos(int n)
{
  if (n <= 0)
    return 0;                       
  return n + soma_positivos(n - 1); 
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// QUESTÃO 2 - Dado um inteiro N, retorna o somatório dos números de 0 a N

int soma_inteiros(int n)
{
  if (n == 0)
    return 0; 
  if (n > 0)
    return n + soma_inteiros(n - 1); 
  return n + soma_inteiros(n + 1);   
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// QUESTÃO 3 - Dada uma sting S, retorna verdadeiro se S for um palíndromo ou falso caso contrário"

#include <string>
using namespace std;

bool palindromo_aux(const string &s, int inicio, int fim)
{
  if (inicio >= fim)
    return true; // Caso base: chegou no meio.
  if (s[inicio] != s[fim])
    return false;                                
  return palindromo_aux(s, inicio + 1, fim - 1); 
}

bool palindromo(const string &s)
{
  return palindromo_aux(s, 0, s.size() - 1);
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=



// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// QUESTÃO 4 - Dado um inteiro positivo N, retorna o fatorial duplo de N

int fatorial_duplo(int n)
{
  if (n <= 0)
    return 1;                       
  return n * fatorial_duplo(n - 2); 
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=



// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// QUESTÃO 5 - Dado um inteiro positivo N, retorna o n-ésimo termo da sequência de Padovan

int padovan(int n)
{
  if (n == 0 || n == 1 || n == 2)
    return 1;                             
  return padovan(n - 2) + padovan(n - 3); 
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=