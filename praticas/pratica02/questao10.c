//Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.

#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    
    printf("Insira um numero inteiro:\n");
    scanf("%i", &num);

    for (i = 0; i <= 10; i++) {
        printf("%ix%i=%i\n", num, i, num * i);   
    }

    return 0;
}