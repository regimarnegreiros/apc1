//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)

#include <stdio.h>
#include <math.h>

int main() {
    float valorgigabyte = 7.0f;
    float valorbyte = valorgigabyte * pow(1024, 3);

    printf("\nGb: %.2f\nByte: %.2f\n\n", valorgigabyte, valorbyte);
    return 0;
}