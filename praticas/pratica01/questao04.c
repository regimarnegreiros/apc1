#include <stdio.h>

int main() {
  float ICMS = 0.17f;
  float COFINS = 0.076f;
  float PIS_PASEP = 0.0165f;

  float preco_inicial = 7777.0f;
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf ("\nO preço inicial: %.2f R$\nO preço final com os impostos: %.2f R$\n\n", preco_inicial, preco_final);
  
  return 0;
}