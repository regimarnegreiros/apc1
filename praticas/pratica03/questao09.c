//Faça um programa em C que leia dez números e imprima o maior e o menor entre eles.

#include <stdio.h>

int main(void) {
    int i;
    float maior = 0;
    float valores[10] = {0, 1, 2, 3, 45.7, 5, 6, 7, 8, 9};

    for(i = 1; i <= 10; i++) {
        if (maior < valores[i]) {
            maior = valores[i];
        }
    }
    printf("O maior valor e: %.2f", maior);
    return 0;
}