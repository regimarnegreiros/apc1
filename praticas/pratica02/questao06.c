//Fa�a um programa em C que leia o valor de compra, o ano de fabrica��o e o ano de deprecia��o e calcule o valor depreciado de um ve�culo (deprecia��o = (ano de deprecia��o - ano de fabrica��o) x 0,01 x valor de compra).

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valor_compra;
    int ano_fabricacao, ano_depreciacao;

    printf("Qual o valor de compra do ve�culo?\n");
    scanf("%f", &valor_compra);

    printf("Qual o ano de fabrica��o do ve�culo?\n");
    scanf("%i", &ano_fabricacao);

    printf("Qual o ano deprecia��o?\n");
    scanf("%i", &ano_depreciacao);

    if (ano_depreciacao < ano_fabricacao){
        printf("Voc� inseriu dados inv�lidos");
    } else {
        printf("O valor de deprecia��o desse v�culo � de: %.2fR$", (ano_depreciacao - ano_fabricacao)*0.01*valor_compra);
    }

    return 0;
}