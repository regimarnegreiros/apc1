//Faça um programa em C que leia nome e telefone de 10 contatos, e depois imprima todos os contatos no formato "nome - (telefone)".

#include <stdio.h>

int main(void) {
    char nome[10][50] = {"Pedro", "Paulo", "Leticia", "Andre", "Veronica", "Joao", "Almir", "Francisco", "Gabriel", "Fabio"};
    char telefone[10][50] = {"111111", "222222", "333333", "444444", "555555", "666666", "777777", "888888", "999999", "101010"};
    int i;

    for (i = 0; i < 10; i++) {
        printf("%s - (%s)\n", nome[i], telefone[i]);
    }

    return 0;
}