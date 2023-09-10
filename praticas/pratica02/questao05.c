//Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    float peso, altura;

    printf("\nQual o seu peso?\n");
    scanf("%f", &peso);

    printf("Qual a sua altura em metros?\n");
    scanf("%f", &altura);

    printf("O seu IMC é igual a %.2f\n", peso / (altura * altura));

    return 0;
}