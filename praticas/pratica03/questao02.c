// Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.

#include <stdio.h>

int main() {
    float numero;

    printf("Insira um numero:\n");
    scanf("%f", &numero);

    if (numero > 500) {
        printf("O valor %.2f tem o desconto de 10%% e o valor ficou por %.2f", numero, numero - numero*0.1);
    } else if (numero > 100) {
        printf("O valor %.2f tem o desconto de 5%% e o valor ficou por %.2f", numero, numero - numero*0.05);
    } else {
        printf("O valor %.2f tem o desconto de 1%% e o valor ficou por %.2f", numero, numero - numero*0.01);
    }
    
    return 0;
}