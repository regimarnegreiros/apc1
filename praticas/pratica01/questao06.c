//Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {
    float a = 1.0f;
    float b = 4.0f;
    float c = 2.0f;

    float delta = b*b - 4*a*c;

    if (delta <= 0) {
        printf ("\nValor indeterminado\n\n");
    } else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);

        printf ("\nX1: %f \nX2: %f \n\n", x1, x2);
    }
    return 0;
}