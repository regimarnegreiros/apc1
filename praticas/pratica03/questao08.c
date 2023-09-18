#include <stdio.h>

int main() {
    int fatorial, n;

    fatorial = 12;

    for(n = fatorial - 1; n >= 1; n--) {
        fatorial = fatorial * n;
        printf("%i\n", fatorial);
    }
    return 0;
}