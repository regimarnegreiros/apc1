//Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>
#include <math.h>

int main() {
    int segundos_input = 1000;

    float horas = segundos_input / 3600;
    float minutos = (segundos_input % 3600) / 60;
    float segundos = (segundos_input % 3600) % 60;

    printf("\n%d segundos corresponde a %.0f horas %.0f minutos e %.0f segundos\n\n", segundos_input, horas, minutos, segundos);

    return(0);
}
