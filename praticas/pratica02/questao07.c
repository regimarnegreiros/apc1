//Fa�a um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no m�s e calcule o sal�rio bruto, o sal�rio l�quido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

#include <stdio.h>
int main() {
    float valor_hora, horas_trabalhadas;

    printf("Qual o valor da hora?\n");
    scanf("%f", &valor_hora);
    printf("Quantas horas foram trabalhadas?\n");
    scanf("%f", &horas_trabalhadas);

    float salario_bruto = valor_hora * horas_trabalhadas;

    printf("Voce recebe %.2f R$", salario_bruto - salario_bruto*0.36);

    return 0;
}