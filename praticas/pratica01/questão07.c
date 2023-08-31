//Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float altura = 7.0f;
    float distancia = 10.0f;

    float seno_angulo = altura / distancia;

    printf("\nAltura: %.2fm\nDistância: %.2fm\nSeno: %.2f° graus\n\n", altura, distancia, seno_angulo);


    return(0);
}