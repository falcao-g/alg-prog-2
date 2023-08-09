#include <stdio.h>

int leValor() {
    int n;
    scanf("%d", &n);
    return n;
}

int ultimoDigito(int n) {
    n = n % 10;
    return n;
}

int atualizaValor(int n) {
    n /= 10;
    return n;
}

int main() {
    int n = leValor();
    int cont = 0;
    int cont_p = 0;
    int soma_p = 0;
    int digito;

    while (n != 0) {
        digito = ultimoDigito(n);

        if (digito % 2 == 0) {
            cont_p++;
            soma_p += digito;
        }
        cont++;

        n = atualizaValor(n);
    }

    printf("%d dígitos foram o número informado\n", cont);

    if (cont_p != 0) {
        printf("Média dos dígitos pares existentes: %d\n", soma_p / cont_p);
    } else {
        printf("Não existem dígitos pares no número informado\n");
    }

    return 0;
}