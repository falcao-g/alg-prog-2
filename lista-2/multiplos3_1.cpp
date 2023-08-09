#include <stdio.h>

int main() {
    int cont = 0, i = 0;

    while (cont < 100) {
        printf("%d ", i);
        cont++;
        i += 3;
    }

    printf("\n%d", cont);

    return 0;
}