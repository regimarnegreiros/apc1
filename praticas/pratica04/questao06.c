//Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).

#include <stdio.h>
#include <string.h>

int main(void) {
    char verbo[100];

    printf("Digite um verbo terminado em AR: \n");
    scanf("%s", verbo);

    int tamanho = strlen(verbo);

    if ((verbo[tamanho - 2] == 'a' || verbo[tamanho - 2] == 'A') && (verbo[tamanho - 1] == 'r' || verbo[tamanho - 1] == 'R')) {
        verbo[tamanho - 2] = '\0';
        
        printf("Eu %so\n", strlwr(verbo));
        printf("Tu %sas\n", strlwr(verbo));
        printf("Ele %sa\n", strlwr(verbo));
        printf("Nos %samos\n", strlwr(verbo));
        printf("Vos %sais\n", strlwr(verbo));
        printf("Eles e elas %sam\n", strlwr(verbo));
    } else {
        printf("Voce nao digitou um verbo terminado em AR");
    }

    return 0;
}