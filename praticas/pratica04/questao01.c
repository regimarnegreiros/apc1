//Faça um programa em C que preencha uma matriz com 10 números, depois leia um número e localize a posição dele na matriz.

#include <stdio.h>

int main(void) {
    int numero = 17;
    int i;
    int matriz[10] = {17, 32, 3, 4, 5, 6, 2, 8, 5, 780};

    for(i = 0; matriz[i] != numero; i++) {}
    if (i >= 10) {
        printf("O numero nao esta na matriz");
    } else {
        printf("A posicao onde esta o numero %i e a posicao %i na matriz", numero, i);
    }
    
    return 0;
}