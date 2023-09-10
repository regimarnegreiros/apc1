// FaÁa um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua ·rea em hectares (1 hectare = 10.000 m≤).

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float largura, comprimento, area_metros, area_hectares;

    printf("\nInsira a largura:\n");
    scanf("%f", &largura);

    printf("Insira o comprimento:\n");
    scanf("%f", &comprimento);

    area_metros = largura * comprimento;
    area_hectares = area_metros / 10000;

    printf("\nLargura: %.2fm\nComprimento: %.2fm\n¡rea metros: %.2fm≤\n¡rea hectares: %.2fha\n\n", largura, comprimento, area_metros, area_hectares);

    return 0;
}