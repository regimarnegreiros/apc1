//Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.

#include <stdio.h>

int main() {
    int nota_numero;

    printf("Insira um numero inteiro de 1 a 5:\n");
    scanf("%i", &nota_numero);

    switch (nota_numero) {
        case 1:
        printf("Nota ruim");
        break;

        case 2:
        printf("Nota insuficiente");
        break;

        case 3:
        printf("Nota suficiente");
        break;

        case 4:
        printf("Nota boa");
        break;

        case 5:
        printf("Nota otima");
        break;

        default:
        printf("Valor invalido");
    }
    return 0;
}