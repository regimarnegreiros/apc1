#include <stdio.h>

int main() {
    int ano;
    printf("Insira um ano:\n");
    scanf("%i", &ano);

    if (ano % 4 == 0 || ano % 100 == 0 || ano % 400 == 0) {
        printf("O ano %i é bisexto", ano);
    } else {
        printf("O ano %i não é bisexto", ano);
    }
    return 0;
}