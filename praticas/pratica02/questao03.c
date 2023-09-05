//Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    float celcius, fahrenheit;

    printf("Digite a temperatura em celcius:\n");
    scanf("%f", &celcius);

    fahrenheit = celcius * 9 / 5 + 32;
    
    printf("%.1f° celcius corresponde a %.1f° fahrenheit", celcius, fahrenheit);

    return 0;
}