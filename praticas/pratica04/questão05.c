#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char frase[1000];

    printf("Digite uma frase: ");
    scanf("%s", frase);

    printf("Sua frase em maiusculo: %s\n", strupr(frase));
    printf("Sua frase em minusculo: %s\n", strlwr(frase));
    return 0;
}