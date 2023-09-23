//Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.

#include <stdio.h>
#include <string.h>

int main(void) {
    char matriz[6][5];
    char frase[31];
    int digito = 0;
    int i, j;
    
    printf("Escreva uma frase de ate 30 caracteres:\n");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0'; // remove o \n do final da frase coletada

    int tamanho_frase = strlen(frase);

    for (i=0; i<6; i++) {
        for(j=0; j<5; j++) {
            if (digito < tamanho_frase) {
                matriz[i][j] = frase[digito];
                digito++;
            } else {
                matriz[i][j] = ' ';
            }
        }
    }

    for (j=0; j<5; j++) {
        for(i=0; i<6; i++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}