//Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    
    printf("Insira um numero inteiro:\n");
    scanf("%i", &num);
    printf("Em char:\n%c", num);

    return 0;
}