#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int base = 2;
    int expoente = 10;
    printf("%d\n", potencia(base, expoente));
    return 0;
}