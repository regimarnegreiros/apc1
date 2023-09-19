//Faça um programa em C que leia um número decimal e o converta em binário (ex.: 9 => 1001).

#include <stdio.h>

int main(void) {
    int resultado, resto, i, j;
    int input_inicial = 88;
    int input = input_inicial;
    int binario_inverso[32];
    int binario[32];

    for (i = 1; resultado > 0; i++) {
        resultado = input / 2;
        resto = input % 2;
        input = resultado;
        binario_inverso[i] = resto;
    }

    printf("\n");
    printf("O numero %i em binario corresponde a: ", input_inicial);
    for (j = 1; j < i; j++) {
        binario[j] = binario_inverso[i-j];
        printf("%i", binario[j]);
    }
    
    return 0;
}