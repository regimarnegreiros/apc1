//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  float base = 5.0f;
  float altura = 7.0f;
  float area = (base * altura) / 2;

  printf("\nBase: %.2f cm\nAltura: %.2f cm \nÁrea do triângulo: %.2f\n\n", base, altura, area);
  
  return 0;
}