//Faça um programa em C que leia o número de mês, valide o número com os meses definidos por uma enumeração e imprima o nome do mês.

#include <stdio.h>

int main(void) {
    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int mesdigitado;

    printf("Digite um mes que deseja: \n");
    scanf("%i", &mesdigitado);

    if (mesdigitado < 1 || mesdigitado > 12) {
        printf("Voce digitou um numero invalido");
    } else {
        printf("O mes correspondente ao numero %i e %s.", mesdigitado, meses[mesdigitado - 1]);
    }
    return 0;
}