//Faça um programa em C que leia matricula e email de 10 alunos, e depois localize o email do aluno a partir de uma matrícula lida.

#include <stdio.h>
#include <string.h>

int main(void) {
    char email[10][50] = {"pedro@email.com", "paulo@email.com", "leticia@email.com", "andre@email.com", "veronica@email.com", "joao@email.com", "almir@email.com", "francisco@email.com", "gabriel@email.com", "fabio@email.com"};
    char matricula[10][50] = {"111111", "222222", "333333", "444444", "555555", "666666", "777777", "888888", "999999", "101010"};
    char matricula_lida[50];
    int i;

    printf("Digite a matricula para localizar o aluno: \n");
    scanf("%s", matricula_lida);

    for(i = 0; i < 10; i++) {
        if (strcmp(matricula_lida, matricula[i]) == 0) {
            break;
        }
    }

    if (i >= 10) {
        printf("Email nao encontrado");
    } else {
        printf("O email do aluno localizado na matricula e: %s", email[i]);
    }

    return 0;
}