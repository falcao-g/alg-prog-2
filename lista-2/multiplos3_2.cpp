#include <stdio.h>

void Imprime(int numero) {
    printf("%d ", numero);
}

int main() {
    int cont = 0, i = 0;

    while (cont < 100) {
        Imprime(i);
        cont++;
        i += 3;
    }

    printf("\n%d", cont);

    return 0;
}