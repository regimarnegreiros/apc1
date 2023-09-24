#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    printf("Formato BR: %02i/%02i/%04i\n", dia, mes, ano);
    printf("Formato US: %02i/%02i/%04i\n", mes, dia, ano);

    return 0;
}
