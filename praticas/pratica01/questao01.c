// Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  float nota_a1 = 5.5f;
  float nota_a2 = 6.0f;

  float media = 0.4 * nota_a1 + 0.6 * nota_a2;
  
  printf("A média do aluno é %.2f\n", media);
  
  return 0;
}