//Fa�a um programa que C que calcule os impostos inclu�dos no pre�o de um produto (pre�o final = (1 + ICMS + COFINS + PIS/PASEP) x pre�o inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");

  float ICMS = 0.17f;
  float COFINS = 0.076f;
  float PIS_PASEP = 0.0165f;

  float preco_inicial = 7777.0f;
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf ("\nO pre�o inicial: %.2f R$\nO pre�o final com os impostos: %.2f R$\n\n", preco_inicial, preco_final);
  
  return 0;
}