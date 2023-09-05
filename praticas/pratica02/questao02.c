//Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int num1, num2;

    printf("Insira um número inteiro\n");
    scanf("%d", &num1);

    printf("Insira mais um número inteiro\n");
    scanf("%d", &num2);

    int divisao = num1 / num2;
    int resto = num1 % num2;

    printf("\nQuociente: %d\nResto: %d\n\n", divisao, resto);

    return 0;
}