//Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>
#include <math.h>

int main() {
    int input = 5637;

    int unidade = input % 10;
    int dezena = ((input % 100) - unidade) / 10;
    int centena = ((input % 1000) - dezena - unidade) / 100;
    int milhares = (input - centena - dezena - unidade) / 1000;

    printf("\n%d unidades, %d dezenas, %d centenas e %d milhares\n\n", unidade, dezena, centena, milhares);

    return(0);
}