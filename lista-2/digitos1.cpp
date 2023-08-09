#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cont = 0;
    int cont_p = 0;
    int soma_p = 0;
    int digito;

    while (n != 0) {
        digito = n % 10;

        if (digito % 2 == 0) {
            cont_p++;
            soma_p += digito;
        }
        cont += 1;

        n /= 10;
    }

    printf("%d dígitos foram o número informado\n", cont);

    if (cont_p != 0) {
        printf("Média dos dígitos pares existentes: %d\n", soma_p / cont_p);
    } else {
        printf("Não existem dígitos pares no número informado\n");
    }

    return 0;
}