//Fa�a um programa em C que calcule a �rea de um tri�ngulo (a = base x altura / 2). Considere base e altura n�meros inteiros maior que 0.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  float base = 5.0f;
  float altura = 7.0f;
  float area = (base * altura) / 2;

  printf("\nBase: %.2f cm\nAltura: %.2f cm \n�rea do tri�ngulo: %.2f\n\n", base, altura, area);
  
  return 0;
}