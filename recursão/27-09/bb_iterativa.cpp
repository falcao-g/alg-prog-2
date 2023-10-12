#include <stdio.h>
#define MAX 5

using namespace std;

int buscaBinaria(int vet[MAX], int alvo) {
    int esq = 0;
    int dir = MAX - 1;

    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        if (vet[meio] == alvo) {
            return meio;
        } else if (vet[meio] < alvo) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }

    return -1;
}

int main() {
    int vet[MAX] = {1, 3, 5, 7, 9};
    int alvo = 7;

    int index = buscaBinaria(vet, alvo);

    if (index != -1) {
        printf("Alvo encontrado no index: %d\n", index);
    } else {
        printf("Alvo não estava no vetor informado\n");
    }

    return 0;
}
