#include <stdio.h>
#include <stdlib.h>
#define N 100

int Inserir (int v[], int n, int k, int y); /* v = vetor, n = numero de elementos, k = indice do vetor, y = elemento a ser inserido*/
int Buscar (int v[], int n, int x);
int Remover (int v[], int n, int k);
void Imprimir (int v[], int n);

int main ()
{
    int v[N];
    int n = 0;
    int i, j;

    for(i = 1; i <= 5; i++){ /* primeiro i = ultimo elemento, segundo i = numero total de elementos, i++ = incrementa 1 + 1.*/
        n = Inserir(v, n, 0, i); }

    j = Buscar (v, n, 4); /* 4 � o elemento que eu quero saber qual � a posi��o dele */

    printf ("Indice de %d: %d. \n", 4, j);

    Imprimir(v, n);

    return 0;
}

int Inserir (int v[], int n, int k, int y)
{
    int i;

    i = n - 1;

    while(i >= k) {

    v[i+1] = v[i];
    i--; }

    v[k] = y;

    return n+1;
}

int Buscar (int v[], int n, int x)
{
    int i;

    i = n - 1;

    while (i >= 0 && v[i] != x)
        i = i - 1;

    return i;
}

int Remover (int v[], int n, int k)
{
    int j;

  for(j = k; j < n-1; j++)
   { v[j] = v[j+1]; /* Remove o elemento seguindo do indice indicado*/}

   return n-1;
}

void Imprimir (int v[], int n)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d ", v[i]); }
}
