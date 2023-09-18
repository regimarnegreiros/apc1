#include <stdio.h>

int main() {
    int Fn, Fn1, Fn2, i;
    Fn1 = 1;
    Fn2 = 0;

    for(i = 1; i <= 10; i++) {
        Fn = Fn1 + Fn2;
        Fn2 = Fn1;
        Fn1 = Fn;
        printf("%i\n", Fn);
    }
    return 0;
}