//Faça um programa em C que leia a quantidade e o preço de 10 produtos de um nota fiscal e imprima o valor total de cada produto e o valor total da nota.

#include <stdio.h>

int main(void) {
    int i;
    float precos[10] = {1, 15.99, 1, 3.50, 5, 4, 1, 5, 1, 1};
    int quantidade[10] = {1, 1, 1, 1, 3, 1, 1, 6, 1, 2};
    float total;

    printf("===========================================\n");
    printf("Descricao dos Produtos/Servicos:\n");
    printf("-------------------------------------------\n");
    
    for(i=0; i<10; i++){
        if (i >= 9) {
            printf("%i. Produto %i           R$ %.2f    Qtd. %i\n", i+1, i+1, precos[i], quantidade[i]);
        } else {
            printf("0%i. Produto %i            R$ %.2f    Qtd. %i\n", i+1, i+1, precos[i], quantidade[i]);
        }
    }
    for(i=0; i<10; i++){
        total = total + precos[i]*quantidade[i];
    }

    printf("-------------------------------------------\n");
    printf("Total:                   R$ %.2f\n", total);
    printf("===========================================\n");
    return 0;
}