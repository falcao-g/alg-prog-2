#include <stdio.h>

void leValor(int &n) {
    scanf("%d", &n);
}

void ultimoDigito(int n, int &digito) {
    digito = n % 10;
}

void atualizaValor(int &n) {
    n /= 10;
}

int main() {
    int n;
    int cont = 0;
    int cont_p = 0;
    int soma_p = 0;
    int digito;

    leValor(n);

    while (n != 0) {
        ultimoDigito(n, digito);

        if (digito % 2 == 0) {
            cont_p++;
            soma_p += digito;
        }
        cont++;

        atualizaValor(n);
    }

    printf("%d dígitos foram o número informado\n", cont);

    if (cont_p != 0) {
        printf("Média dos dígitos pares existentes: %d\n", soma_p / cont_p);
    } else {
        printf("Não existem dígitos pares no número informado\n");
    }

    return 0;
}