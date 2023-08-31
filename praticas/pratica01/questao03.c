//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  float pi = 3.1416f;
  int raio = 7;
  float perimetro = 2 * pi * raio;

  printf("\nPi: %.4f \nRaio: %dcm\nPerímetro: %.2fcm\n\n", pi, raio, perimetro);
  
  return 0;
}