#include <stdio.h>
#define LENGTH 15

/**
  Elaborar um programa que leia 15 elementos inteiros de uma matriz A do tipo vetor. Construir
  uma matriz B de mesmo tipo, observando a seguinte lei de formação: "todo elemento da matriz
  B deve ser o quadrado do elemento da matriz A correspondente". Apresentar os elementos das
  matrizes A e B
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    B[i] = A[i] * A[i];
    printf("O número %d ao quadrado é %d\n", A[i], B[i]);
  }

  return 0;
}