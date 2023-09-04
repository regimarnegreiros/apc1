#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    float num1;
    float num2;
    float num3;

    printf("\nInsira o número 1: \n");
    scanf("%f",&num1);

    printf("Insira o número 2: \n");
    scanf("%f",&num2);

    printf("Insira o número 3: \n");
    scanf("%f",&num3);

    float media = (num1 + num2 + num3) / 3;

    printf("A média aritimética é: %f\n\n", media);

    return 0;
}