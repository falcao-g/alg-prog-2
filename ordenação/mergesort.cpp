#include <stdio.h>
#define MAX 100000

void merge(int v[], int ini, int meio, int fim) {
    int i, j, k, aux[MAX];

    i = ini;
    j = meio + 1;
    k = 0;

    while (i <= meio && j <= fim) {
        if (v[i] <= v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    }

    while (i <= meio)
        aux[k++] = v[i++];
    while (j <= fim)
        aux[k++] = v[j++];

    for (i = ini, k = 0; i <= fim; i++, k++)
        v[i] = aux[k];
}

void mergeSort(int v[], int ini, int fim) {
    int meio;

    if (ini < fim) {
        meio = (ini + fim) / 2;
        mergeSort(v, ini, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, ini, meio, fim);
    }
}

int main() {
    int n, v[MAX], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    mergeSort(v, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}