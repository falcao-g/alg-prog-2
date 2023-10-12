#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s nome ano_de_nascimento ano_atual\n", argv[0]);
        return 1;
    }

    char *nome = argv[1];
    int ano_nasc = atoi(argv[2]);
    int ano_atual = atoi(argv[3]);
    int idade = ano_atual - ano_nasc;

    printf("Oi %s, voce tem %d anos\n", nome, idade);

    return 0;
}
