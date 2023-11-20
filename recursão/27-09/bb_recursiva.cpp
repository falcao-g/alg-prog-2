#include <stdio.h>
#define MAX 10

int busca_binaria_recursiva(int vetor[MAX], int valor, int inicio, int fim) {
    if (inicio > fim) {
        return -1;  // valor não encontrado
    }

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == valor) {
        return meio;  // valor encontrado na posição meio
    } else if (vetor[meio] > valor) {
        return busca_binaria_recursiva(
            vetor, valor, inicio,
            meio - 1);  // busca na metade esquerda do vetor
    } else {
        return busca_binaria_recursiva(
            vetor, valor, meio + 1, fim);  // busca na metade direita do vetor
    }
}

int main() {
    int vetor[MAX] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int valor = 7;

    int posicao = busca_binaria_recursiva(vetor, valor, 0, MAX - 1);

    if (posicao == -1) {
        printf("Valor não encontrado no vetor.\n");
    } else {
        printf("Valor encontrado na posição %d do vetor.\n", posicao);
    }

    return 0;
}
