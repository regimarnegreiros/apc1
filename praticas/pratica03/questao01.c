//Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

int main() {
    int numero;

    printf("Insira um numero inteiro:\n");
    scanf("%i", &numero);

    if (numero % 2 == 0) {
        printf("O numero %i e par", numero);
    } else {
        printf("O numero %i e impar", numero);
    }
    return 0;
}