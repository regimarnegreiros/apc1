//Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2;
    
    printf("Insira x1:\n");
    scanf("%f", &x1);

    printf("Insira x2:\n");
    scanf("%f", &x2);

    printf("Insira y1:\n");
    scanf("%f", &y1);

    printf("Insira y1:\n");
    scanf("%f", &y2);

    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Resultado:\n%.2f", d);

    return 0;
}