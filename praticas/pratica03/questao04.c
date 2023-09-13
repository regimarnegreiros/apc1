// Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.

#include <stdio.h>
#include <ctype.h>

int main() {
    char tecla;

    printf("Digite uma tecla: ");
    scanf("%c", &tecla);

    if (isalpha(tecla)) {
        printf("A tecla digitada e uma letra.\n");
    } else if (isdigit(tecla)) {
        printf("A tecla digitada e um digito.\n");
    } else {
        printf("A tecla digitada e um caractere especial.\n");
    }

    return 0;
}
