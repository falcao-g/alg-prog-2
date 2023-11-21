#include <stdio.h>
#define MAX 100000

void quicksort(int v[], int ini, int fim) {
    int i, j, pivo, aux;

    if (ini < fim) {
        pivo = ini;
        i = ini;
        j = fim;

        while (i < j) {
            while (v[i] <= v[pivo] && i < fim)
                i++;
            while (v[j] > v[pivo])
                j--;
            if (i < j) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }

        aux = v[pivo];
        v[pivo] = v[j];
        v[j] = aux;

        quicksort(v, ini, j - 1);
        quicksort(v, j + 1, fim);
    }
}

int main() {
    int n, v[MAX], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    quicksort(v, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}