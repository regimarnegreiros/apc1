//Faça um programa em C que leia as notas de 10 alunos, calcule a média da turma e contabilize quantos alunos estão com a nota acima da média.

#include <stdio.h>

int main(void) {
    float notas[10] = {6, 7, 4, 9, 10, 2, 3, 5, 8, 9};
    float media;
    int alunos_acima_media, i;

    for(i=0; i<10; i++) {
        media = media + notas[i];
    }
    media = media/10;
    printf("A media dos 10 alunos foi %.2f\n", media);

    for(i=0; i<10; i++) {
        if (notas[i] >= 7){
            alunos_acima_media++;
        }
    }
    printf("A quantidade de alunos acima da media: %i", alunos_acima_media);

    return 0;
}