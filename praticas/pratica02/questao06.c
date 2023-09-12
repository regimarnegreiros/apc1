//Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valor_compra;
    int ano_fabricacao, ano_depreciacao;

    printf("Qual o valor de compra do veículo?\n");
    scanf("%f", &valor_compra);

    printf("Qual o ano de fabricação do veículo?\n");
    scanf("%i", &ano_fabricacao);

    printf("Qual o ano depreciação?\n");
    scanf("%i", &ano_depreciacao);

    if (ano_depreciacao < ano_fabricacao){
        printf("Você inseriu dados inválidos");
    } else {
        printf("O valor de depreciação desse vículo é de: %.2fR$", (ano_depreciacao - ano_fabricacao)*0.01*valor_compra);
    }

    return 0;
}