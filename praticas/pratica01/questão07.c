//Fa�a um programa em C que calcule a altura alcan�ada por um avi�o ap�s ter percorrido uma certa dist�ncia (seno(�ngulo) = altura/dist�ncia). Considere o �ngulo de inclina��o do avi�o menor ou igual a 45�.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float altura = 7.0f;
    float distancia = 10.0f;

    float seno_angulo = altura / distancia;

    printf("\nAltura: %.2fm\nDist�ncia: %.2fm\nSeno: %.2f� graus\n\n", altura, distancia, seno_angulo);


    return(0);
}