//Faça um programa em C que leia três números reais e imprima a média aritmética destes números.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    float num1;
    float num2;
    float num3;

    printf("\nInsira o n�mero 1: \n");
    scanf("%f",&num1);

    printf("Insira o n�mero 2: \n");
    scanf("%f",&num2);

    printf("Insira o n�mero 3: \n");
    scanf("%f",&num3);

    float media = (num1 + num2 + num3) / 3;

    printf("A m�dia aritim�tica �: %f\n\n", media);

    return 0;
}