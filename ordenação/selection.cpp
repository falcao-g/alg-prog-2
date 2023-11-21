#include <stdio.h>
#define MAX 100000

void selection(int n, int v[MAX]) {  // O(n^2)
    int i, j, min, aux;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (v[j] < v[min])
                min = j;
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

int main() {
    int n, v[MAX], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    selection(n, v);

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}