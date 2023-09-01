//Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>
#include <math.h>

int main() {
    int anos = 7;
    int meses = 7;
    int dias = 7;

    int total_dias = (anos*365) + (meses*30) + dias;

    printf("%d anos, %d meses e %d dias corresponde a %d dias", anos, meses, dias, total_dias);

    return(0);
}